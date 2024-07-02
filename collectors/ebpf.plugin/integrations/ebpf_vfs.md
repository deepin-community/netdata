<!--startmeta
custom_edit_url: "https://github.com/netdata/netdata/edit/master/collectors/ebpf.plugin/integrations/ebpf_vfs.md"
meta_yaml: "https://github.com/netdata/netdata/edit/master/collectors/ebpf.plugin/metadata.yaml"
sidebar_label: "eBPF VFS"
learn_status: "Published"
learn_rel_path: "Data Collection/eBPF"
most_popular: False
message: "DO NOT EDIT THIS FILE DIRECTLY, IT IS GENERATED BY THE COLLECTOR'S metadata.yaml FILE"
endmeta-->

# eBPF VFS


<img src="https://netdata.cloud/img/ebpf.jpg" width="150"/>


Plugin: ebpf.plugin
Module: vfs

<img src="https://img.shields.io/badge/maintained%20by-Netdata-%2300ab44" />

## Overview

Monitor I/O events on Linux Virtual Filesystem.

Attach tracing (kprobe, trampoline) to internal kernel functions according options used to compile kernel.

This collector is only supported on the following platforms:

- Linux

This collector supports collecting metrics from multiple instances of this integration, including remote instances.

The plugin needs setuid because it loads data inside kernel. Netada sets necessary permission during installation time.

### Default Behavior

#### Auto-Detection

The plugin checks kernel compilation flags (CONFIG_KPROBES, CONFIG_BPF, CONFIG_BPF_SYSCALL, CONFIG_BPF_JIT) and presence of BTF files to decide which eBPF program will be attached.

#### Limits

The default configuration for this integration does not impose any limits on data collection.

#### Performance Impact

This thread will add overhead every time that an internal kernel function monitored by this thread is called. The estimated additional period of time is between 90-200ms per call on kernels that do not have BTF technology.


## Metrics

Metrics grouped by *scope*.

The scope defines the instance that the metric belongs to. An instance is uniquely identified by a set of labels.



### Per cgroup

These Metrics show grouped information per cgroup/service.

This scope has no labels.

Metrics:

| Metric | Dimensions | Unit |
|:------|:----------|:----|
| cgroup.vfs_unlink | delete | calls/s |
| cgroup.vfs_write | write | calls/s |
| cgroup.vfs_write_error | write | calls/s |
| cgroup.vfs_read | read | calls/s |
| cgroup.vfs_read_error | read | calls/s |
| cgroup.vfs_write_bytes | write | bytes/s |
| cgroup.vfs_read_bytes | read | bytes/s |
| cgroup.vfs_fsync | fsync | calls/s |
| cgroup.vfs_fsync_error | fsync | calls/s |
| cgroup.vfs_open | open | calls/s |
| cgroup.vfs_open_error | open | calls/s |
| cgroup.vfs_create | create | calls/s |
| cgroup.vfs_create_error | create | calls/s |
| services.vfs_unlink | a dimension per systemd service | calls/s |
| services.vfs_write | a dimension per systemd service | calls/s |
| services.vfs_write_error | a dimension per systemd service | calls/s |
| services.vfs_read | a dimension per systemd service | calls/s |
| services.vfs_read_error | a dimension per systemd service | calls/s |
| services.vfs_write_bytes | a dimension per systemd service | bytes/s |
| services.vfs_read_bytes | a dimension per systemd service | bytes/s |
| services.vfs_fsync | a dimension per systemd service | calls/s |
| services.vfs_fsync_error | a dimension per systemd service | calls/s |
| services.vfs_open | a dimension per systemd service | calls/s |
| services.vfs_open_error | a dimension per systemd service | calls/s |
| services.vfs_create | a dimension per systemd service | calls/s |
| services.vfs_create_error | a dimension per systemd service | calls/s |

### Per eBPF VFS instance

These Metrics show grouped information per cgroup/service.

This scope has no labels.

Metrics:

| Metric | Dimensions | Unit |
|:------|:----------|:----|
| filesystem.vfs_deleted_objects | delete | calls/s |
| filesystem.vfs_io | read, write | calls/s |
| filesystem.vfs_io_bytes | read, write | bytes/s |
| filesystem.vfs_io_error | read, write | calls/s |
| filesystem.vfs_fsync | fsync | calls/s |
| filesystem.vfs_fsync_error | fsync | calls/s |
| filesystem.vfs_open | open | calls/s |
| filesystem.vfs_open_error | open | calls/s |
| filesystem.vfs_create | create | calls/s |
| filesystem.vfs_create_error | create | calls/s |

### Per apps

These Metrics show grouped information per apps group.

Labels:

| Label      | Description     |
|:-----------|:----------------|
| app_group | The name of the group defined in the configuration. |

Metrics:

| Metric | Dimensions | Unit |
|:------|:----------|:----|
| app.ebpf_call_vfs_unlink | calls | calls/s |
| app.ebpf_call_vfs_write | calls | calls/s |
| app.ebpf_call_vfs_write_error | calls | calls/s |
| app.ebpf_call_vfs_read | calls | calls/s |
| app.ebpf_call_vfs_read_error | calls | calls/s |
| app.ebpf_call_vfs_write_bytes | writes | bytes/s |
| app.ebpf_call_vfs_read_bytes | reads | bytes/s |
| app.ebpf_call_vfs_fsync | calls | calls/s |
| app.ebpf_call_vfs_fsync_error | calls | calls/s |
| app.ebpf_call_vfs_open | calls | calls/s |
| app.ebpf_call_vfs_open_error | calls | calls/s |
| app.ebpf_call_vfs_create | calls | calls/s |
| app.ebpf_call_vfs_create_error | calls | calls/s |



## Alerts

There are no alerts configured by default for this integration.


## Setup

### Prerequisites

#### Compile kernel

Check if your kernel was compiled with necessary options (CONFIG_KPROBES, CONFIG_BPF, CONFIG_BPF_SYSCALL, CONFIG_BPF_JIT) in `/proc/config.gz` or inside /boot/config file. Some cited names can be different accoring preferences of Linux distributions.
When you do not have options set, it is necessary to get the kernel source code from https://kernel.org or a kernel package from your distribution, this last is preferred. The kernel compilation has a well definedd pattern, but distributions can deliver their configuration files
with different names.

Now follow steps:
1. Copy the configuration file to /usr/src/linux/.config.
2. Select the necessary options: make oldconfig
3. Compile your kernel image: make bzImage
4. Compile your modules: make modules
5. Copy your new kernel image for boot loader directory
6. Install the new modules: make modules_install
7. Generate an initial ramdisk image (`initrd`) if it is necessary.
8. Update your boot loader



### Configuration

#### File

The configuration file name for this integration is `ebpf.d/vfs.conf`.


You can edit the configuration file using the `edit-config` script from the
Netdata [config directory](https://github.com/netdata/netdata/blob/master/docs/configure/nodes.md#the-netdata-config-directory).

```bash
cd /etc/netdata 2>/dev/null || cd /opt/netdata/etc/netdata
sudo ./edit-config ebpf.d/vfs.conf
```
#### Options

All options are defined inside section `[global]`.


<details><summary>Config options</summary>

| Name | Description | Default | Required |
|:----|:-----------|:-------|:--------:|
| update every | Data collection frequency. | 5 | no |
| ebpf load mode | Define whether plugin will monitor the call (`entry`) for the functions or it will also monitor the return (`return`). | entry | no |
| apps | Enable or disable integration with apps.plugin | no | no |
| cgroups | Enable or disable integration with cgroup.plugin | no | no |
| pid table size | Number of elements stored inside hash tables used to monitor calls per PID. | 32768 | no |
| ebpf type format | Define the file type to load an eBPF program. Three options are available: `legacy` (Attach only `kprobe`), `co-re` (Plugin tries to use `trampoline` when available), and `auto` (plugin check OS configuration before to load). | auto | no |
| ebpf co-re tracing | Select the attach method used by plugin when `co-re` is defined in previous option. Two options are available: `trampoline` (Option with lowest overhead), and `probe` (the same of legacy code). | trampoline | no |
| maps per core | Define how plugin will load their hash maps. When enabled (`yes`) plugin will load one hash table per core, instead to have centralized information. | yes | no |
| lifetime | Set default lifetime for thread when enabled by cloud. | 300 | no |

</details>

#### Examples
There are no configuration examples.

