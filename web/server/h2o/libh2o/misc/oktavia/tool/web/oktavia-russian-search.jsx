import "oktavia-search.jsx";
import "stemmer/russian-stemmer.jsx";

class _Main
{
    static function main(args : string[]) : void
    {
        OktaviaSearch.setStemmer(new RussianStemmer);
    }
}
