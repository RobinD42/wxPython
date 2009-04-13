/////////////////////////////////////////////////////////////////////////////
// Name:        intl.h
// Purpose:     interface of wxLocale
// Author:      wxWidgets team
// RCS-ID:      $Id$
// Licence:     wxWindows license
/////////////////////////////////////////////////////////////////////////////


// --- --- --- generated code begins here --- --- ---

/**
    The languages supported by wxLocale.

    This enum is generated by misc/languages/genlang.py
    When making changes, please put them into misc/languages/langtabl.txt
*/
enum wxLanguage
{
    /// User's default/preferred language as got from OS.
    wxLANGUAGE_DEFAULT,

    /// Unknown language, returned if wxLocale::GetSystemLanguage fails.
    wxLANGUAGE_UNKNOWN,

    wxLANGUAGE_ABKHAZIAN,
    wxLANGUAGE_AFAR,
    wxLANGUAGE_AFRIKAANS,
    wxLANGUAGE_ALBANIAN,
    wxLANGUAGE_AMHARIC,
    wxLANGUAGE_ARABIC,
    wxLANGUAGE_ARABIC_ALGERIA,
    wxLANGUAGE_ARABIC_BAHRAIN,
    wxLANGUAGE_ARABIC_EGYPT,
    wxLANGUAGE_ARABIC_IRAQ,
    wxLANGUAGE_ARABIC_JORDAN,
    wxLANGUAGE_ARABIC_KUWAIT,
    wxLANGUAGE_ARABIC_LEBANON,
    wxLANGUAGE_ARABIC_LIBYA,
    wxLANGUAGE_ARABIC_MOROCCO,
    wxLANGUAGE_ARABIC_OMAN,
    wxLANGUAGE_ARABIC_QATAR,
    wxLANGUAGE_ARABIC_SAUDI_ARABIA,
    wxLANGUAGE_ARABIC_SUDAN,
    wxLANGUAGE_ARABIC_SYRIA,
    wxLANGUAGE_ARABIC_TUNISIA,
    wxLANGUAGE_ARABIC_UAE,
    wxLANGUAGE_ARABIC_YEMEN,
    wxLANGUAGE_ARMENIAN,
    wxLANGUAGE_ASSAMESE,
    wxLANGUAGE_AYMARA,
    wxLANGUAGE_AZERI,
    wxLANGUAGE_AZERI_CYRILLIC,
    wxLANGUAGE_AZERI_LATIN,
    wxLANGUAGE_BASHKIR,
    wxLANGUAGE_BASQUE,
    wxLANGUAGE_BELARUSIAN,
    wxLANGUAGE_BENGALI,
    wxLANGUAGE_BHUTANI,
    wxLANGUAGE_BIHARI,
    wxLANGUAGE_BISLAMA,
    wxLANGUAGE_BRETON,
    wxLANGUAGE_BULGARIAN,
    wxLANGUAGE_BURMESE,
    wxLANGUAGE_CAMBODIAN,
    wxLANGUAGE_CATALAN,
    wxLANGUAGE_CHINESE,
    wxLANGUAGE_CHINESE_SIMPLIFIED,
    wxLANGUAGE_CHINESE_TRADITIONAL,
    wxLANGUAGE_CHINESE_HONGKONG,
    wxLANGUAGE_CHINESE_MACAU,
    wxLANGUAGE_CHINESE_SINGAPORE,
    wxLANGUAGE_CHINESE_TAIWAN,
    wxLANGUAGE_CORSICAN,
    wxLANGUAGE_CROATIAN,
    wxLANGUAGE_CZECH,
    wxLANGUAGE_DANISH,
    wxLANGUAGE_DUTCH,
    wxLANGUAGE_DUTCH_BELGIAN,
    wxLANGUAGE_ENGLISH,
    wxLANGUAGE_ENGLISH_UK,
    wxLANGUAGE_ENGLISH_US,
    wxLANGUAGE_ENGLISH_AUSTRALIA,
    wxLANGUAGE_ENGLISH_BELIZE,
    wxLANGUAGE_ENGLISH_BOTSWANA,
    wxLANGUAGE_ENGLISH_CANADA,
    wxLANGUAGE_ENGLISH_CARIBBEAN,
    wxLANGUAGE_ENGLISH_DENMARK,
    wxLANGUAGE_ENGLISH_EIRE,
    wxLANGUAGE_ENGLISH_JAMAICA,
    wxLANGUAGE_ENGLISH_NEW_ZEALAND,
    wxLANGUAGE_ENGLISH_PHILIPPINES,
    wxLANGUAGE_ENGLISH_SOUTH_AFRICA,
    wxLANGUAGE_ENGLISH_TRINIDAD,
    wxLANGUAGE_ENGLISH_ZIMBABWE,
    wxLANGUAGE_ESPERANTO,
    wxLANGUAGE_ESTONIAN,
    wxLANGUAGE_FAEROESE,
    wxLANGUAGE_FARSI,
    wxLANGUAGE_FIJI,
    wxLANGUAGE_FINNISH,
    wxLANGUAGE_FRENCH,
    wxLANGUAGE_FRENCH_BELGIAN,
    wxLANGUAGE_FRENCH_CANADIAN,
    wxLANGUAGE_FRENCH_LUXEMBOURG,
    wxLANGUAGE_FRENCH_MONACO,
    wxLANGUAGE_FRENCH_SWISS,
    wxLANGUAGE_FRISIAN,
    wxLANGUAGE_GALICIAN,
    wxLANGUAGE_GEORGIAN,
    wxLANGUAGE_GERMAN,
    wxLANGUAGE_GERMAN_AUSTRIAN,
    wxLANGUAGE_GERMAN_BELGIUM,
    wxLANGUAGE_GERMAN_LIECHTENSTEIN,
    wxLANGUAGE_GERMAN_LUXEMBOURG,
    wxLANGUAGE_GERMAN_SWISS,
    wxLANGUAGE_GREEK,
    wxLANGUAGE_GREENLANDIC,
    wxLANGUAGE_GUARANI,
    wxLANGUAGE_GUJARATI,
    wxLANGUAGE_HAUSA,
    wxLANGUAGE_HEBREW,
    wxLANGUAGE_HINDI,
    wxLANGUAGE_HUNGARIAN,
    wxLANGUAGE_ICELANDIC,
    wxLANGUAGE_INDONESIAN,
    wxLANGUAGE_INTERLINGUA,
    wxLANGUAGE_INTERLINGUE,
    wxLANGUAGE_INUKTITUT,
    wxLANGUAGE_INUPIAK,
    wxLANGUAGE_IRISH,
    wxLANGUAGE_ITALIAN,
    wxLANGUAGE_ITALIAN_SWISS,
    wxLANGUAGE_JAPANESE,
    wxLANGUAGE_JAVANESE,
    wxLANGUAGE_KANNADA,
    wxLANGUAGE_KASHMIRI,
    wxLANGUAGE_KASHMIRI_INDIA,
    wxLANGUAGE_KAZAKH,
    wxLANGUAGE_KERNEWEK,
    wxLANGUAGE_KINYARWANDA,
    wxLANGUAGE_KIRGHIZ,
    wxLANGUAGE_KIRUNDI,
    wxLANGUAGE_KONKANI,
    wxLANGUAGE_KOREAN,
    wxLANGUAGE_KURDISH,
    wxLANGUAGE_LAOTHIAN,
    wxLANGUAGE_LATIN,
    wxLANGUAGE_LATVIAN,
    wxLANGUAGE_LINGALA,
    wxLANGUAGE_LITHUANIAN,
    wxLANGUAGE_MACEDONIAN,
    wxLANGUAGE_MALAGASY,
    wxLANGUAGE_MALAY,
    wxLANGUAGE_MALAYALAM,
    wxLANGUAGE_MALAY_BRUNEI_DARUSSALAM,
    wxLANGUAGE_MALAY_MALAYSIA,
    wxLANGUAGE_MALTESE,
    wxLANGUAGE_MANIPURI,
    wxLANGUAGE_MAORI,
    wxLANGUAGE_MARATHI,
    wxLANGUAGE_MOLDAVIAN,
    wxLANGUAGE_MONGOLIAN,
    wxLANGUAGE_NAURU,
    wxLANGUAGE_NEPALI,
    wxLANGUAGE_NEPALI_INDIA,
    wxLANGUAGE_NORWEGIAN_BOKMAL,
    wxLANGUAGE_NORWEGIAN_NYNORSK,
    wxLANGUAGE_OCCITAN,
    wxLANGUAGE_ORIYA,
    wxLANGUAGE_OROMO,
    wxLANGUAGE_PASHTO,
    wxLANGUAGE_POLISH,
    wxLANGUAGE_PORTUGUESE,
    wxLANGUAGE_PORTUGUESE_BRAZILIAN,
    wxLANGUAGE_PUNJABI,
    wxLANGUAGE_QUECHUA,
    wxLANGUAGE_RHAETO_ROMANCE,
    wxLANGUAGE_ROMANIAN,
    wxLANGUAGE_RUSSIAN,
    wxLANGUAGE_RUSSIAN_UKRAINE,
    wxLANGUAGE_SAMI,
    wxLANGUAGE_SAMOAN,
    wxLANGUAGE_SANGHO,
    wxLANGUAGE_SANSKRIT,
    wxLANGUAGE_SCOTS_GAELIC,
    wxLANGUAGE_SERBIAN,
    wxLANGUAGE_SERBIAN_CYRILLIC,
    wxLANGUAGE_SERBIAN_LATIN,
    wxLANGUAGE_SERBO_CROATIAN,
    wxLANGUAGE_SESOTHO,
    wxLANGUAGE_SETSWANA,
    wxLANGUAGE_SHONA,
    wxLANGUAGE_SINDHI,
    wxLANGUAGE_SINHALESE,
    wxLANGUAGE_SISWATI,
    wxLANGUAGE_SLOVAK,
    wxLANGUAGE_SLOVENIAN,
    wxLANGUAGE_SOMALI,
    wxLANGUAGE_SPANISH,
    wxLANGUAGE_SPANISH_ARGENTINA,
    wxLANGUAGE_SPANISH_BOLIVIA,
    wxLANGUAGE_SPANISH_CHILE,
    wxLANGUAGE_SPANISH_COLOMBIA,
    wxLANGUAGE_SPANISH_COSTA_RICA,
    wxLANGUAGE_SPANISH_DOMINICAN_REPUBLIC,
    wxLANGUAGE_SPANISH_ECUADOR,
    wxLANGUAGE_SPANISH_EL_SALVADOR,
    wxLANGUAGE_SPANISH_GUATEMALA,
    wxLANGUAGE_SPANISH_HONDURAS,
    wxLANGUAGE_SPANISH_MEXICAN,
    wxLANGUAGE_SPANISH_MODERN,
    wxLANGUAGE_SPANISH_NICARAGUA,
    wxLANGUAGE_SPANISH_PANAMA,
    wxLANGUAGE_SPANISH_PARAGUAY,
    wxLANGUAGE_SPANISH_PERU,
    wxLANGUAGE_SPANISH_PUERTO_RICO,
    wxLANGUAGE_SPANISH_URUGUAY,
    wxLANGUAGE_SPANISH_US,
    wxLANGUAGE_SPANISH_VENEZUELA,
    wxLANGUAGE_SUNDANESE,
    wxLANGUAGE_SWAHILI,
    wxLANGUAGE_SWEDISH,
    wxLANGUAGE_SWEDISH_FINLAND,
    wxLANGUAGE_TAGALOG,
    wxLANGUAGE_TAJIK,
    wxLANGUAGE_TAMIL,
    wxLANGUAGE_TATAR,
    wxLANGUAGE_TELUGU,
    wxLANGUAGE_THAI,
    wxLANGUAGE_TIBETAN,
    wxLANGUAGE_TIGRINYA,
    wxLANGUAGE_TONGA,
    wxLANGUAGE_TSONGA,
    wxLANGUAGE_TURKISH,
    wxLANGUAGE_TURKMEN,
    wxLANGUAGE_TWI,
    wxLANGUAGE_UIGHUR,
    wxLANGUAGE_UKRAINIAN,
    wxLANGUAGE_URDU,
    wxLANGUAGE_URDU_INDIA,
    wxLANGUAGE_URDU_PAKISTAN,
    wxLANGUAGE_UZBEK,
    wxLANGUAGE_UZBEK_CYRILLIC,
    wxLANGUAGE_UZBEK_LATIN,
    wxLANGUAGE_VALENCIAN,
    wxLANGUAGE_VIETNAMESE,
    wxLANGUAGE_VOLAPUK,
    wxLANGUAGE_WELSH,
    wxLANGUAGE_WOLOF,
    wxLANGUAGE_XHOSA,
    wxLANGUAGE_YIDDISH,
    wxLANGUAGE_YORUBA,
    wxLANGUAGE_ZHUANG,
    wxLANGUAGE_ZULU,

    /// For custom, user-defined languages.
    wxLANGUAGE_USER_DEFINED
};

// --- --- --- generated code ends here --- --- ---



/**
    This is the layout direction stored in wxLanguageInfo and returned by
    wxApp::GetLayoutDirection(), wxWindow::GetLayoutDirection(),
    wxDC::GetLayoutDirection() for RTL (right-to-left) languages support.
*/
enum wxLayoutDirection
{
    wxLayout_Default,
    wxLayout_LeftToRight,
    wxLayout_RightToLeft
};

/**
    Encapsulates a ::wxLanguage indentifier together with OS-specific information
    related to that language.
*/
struct WXDLLIMPEXP_BASE wxLanguageInfo
{
    /// ::wxLanguage id.
    /// It should be greater than @c wxLANGUAGE_USER_DEFINED when defining your own
    /// language info structure.
    int Language;

    /// Canonical name of the language, e.g. @c fr_FR.
    wxString CanonicalName;

    //@{
    /**
        Win32 language identifiers (LANG_xxxx, SUBLANG_xxxx).

        @onlyfor{wxmsw}
    */
    wxUint32 WinLang, WinSublang;
    //@}

    /// Human-readable name of the language.
    wxString Description;

    /// The layout direction used for this language.
    wxLayoutDirection LayoutDirection;

    /// Return the LCID corresponding to this language.
    /// @onlyfor{wxmsw}
    wxUint32 GetLCID() const;

    /// Return the locale name corresponding to this language usable with
    /// @c setlocale() on the current system.
    wxString GetLocaleName() const;
};


/**
    The category of locale settings.

    @see wxLocale::GetInfo()
*/
enum wxLocaleCategory
{
    /// Number formatting.
    wxLOCALE_CAT_NUMBER,

    /// Date/time formatting.
    wxLOCALE_CAT_DATE,

    /// Monetary values formatting.
    wxLOCALE_CAT_MONEY,

    /**
        Default category for the wxLocaleInfo value.

        This category can be used for values which only make sense for a single
        category, e.g. wxLOCALE_SHORT_DATE_FMT which can only be used with
        wxLOCALE_CAT_DATE. As this is the default value of the second parameter
        of wxLocale::GetInfo(), wxLOCALE_CAT_DATE can be omitted when asking
        for wxLOCALE_SHORT_DATE_FMT value.

        @since 2.9.0
     */
    wxLOCALE_CAT_DEFAULT
};

/**
    The values understood by wxLocale::GetInfo().
*/
enum wxLocaleInfo
{
    /**
        The thousands separator.

        This value can be used with either wxLOCALE_CAT_NUMBER or
        wxLOCALE_CAT_MONEY categories.
     */
    wxLOCALE_THOUSANDS_SEP,

    /**
        The character used as decimal point.

        This value can be used with either wxLOCALE_CAT_NUMBER or
        wxLOCALE_CAT_MONEY categories.
     */
    wxLOCALE_DECIMAL_POINT,

    /**
        The date and time formats.

        The strings returned by wxLocale::GetInfo() use strftime() or,
        equivalently, wxDateTime::Format() format. If the relevant format
        couldn't be determined, an empty string is returned -- there is no
        fallback value so that the application could determine the best course
        of actions itself in such case.

        All of these values are used with wxLOCALE_CAT_DATE in
        wxLocale::GetInfo() or, more typically, with wxLOCALE_CAT_DEFAULT as
        they only apply to a single category.
     */
    //@{

    /**
        Short date format.

        Notice that short and long date formats may be the same under POSIX
        systems currently but may, and typically are, different under MSW or OS
        X.

        @since 2.9.0
     */
    wxLOCALE_SHORT_DATE_FMT,

    /**
        Long date format.

        @since 2.9.0
     */
    wxLOCALE_LONG_DATE_FMT,

    /**
        Date and time format.

        @since 2.9.0
     */
    wxLOCALE_DATE_TIME_FMT,

    /**
        Time format.

        @since 2.9.0
     */
    wxLOCALE_TIME_FMT

    //@}
};


/**
    @class wxLocale

    wxLocale class encapsulates all language-dependent settings and is a
    generalization of the C locale concept.

    In wxWidgets this class manages message catalogs which contain the translations
    of the strings used to the current language.

    For a list of the supported languages, please see ::wxLanguage enum values.
    These constants may be used to specify the language in wxLocale::Init and
    are returned by wxLocale::GetSystemLanguage.

    @beginWxPerlOnly
    In wxPerl you can't use the '_' function name, so
    the @c Wx::Locale module can export the @c gettext and
    @c gettext_noop under any given name.

    @code
      # this imports gettext ( equivalent to Wx::GetTranslation
      # and gettext_noop ( a noop )
      # into your module
      use Wx::Locale qw(:default);

      # ....

      # use the functions
      print gettext( "Panic!" );

      button = Wx::Button-new( window, -1, gettext( "Label" ) );
    @endcode

    If you need to translate a lot of strings, then adding gettext( ) around
    each one is a long task ( that is why _( ) was introduced ), so just choose
    a shorter name for gettext:

    @code
      use Wx::Locale 'gettext' = 't',
                     'gettext_noop' = 'gettext_noop';

      # ...

      # use the functions
      print t( "Panic!!" );

      # ...
    @endcode
    @endWxPerlOnly

    @library{wxbase}
    @category{cfg}

    @see @ref overview_i18n, @ref page_samples_internat, wxXLocale
*/
class wxLocale
{
public:
    /**
        This is the default constructor and it does nothing to initialize the object:
        Init() must be used to do that.
    */
    wxLocale();

    /**
        See Init() for parameters description.
    */
    wxLocale(int language,
             int flags = wxLOCALE_LOAD_DEFAULT | wxLOCALE_CONV_ENCODING);

    /**
        See Init() for parameters description.

        The call of this function has several global side effects which you should
        understand: first of all, the application locale is changed - note that this
        will affect many of standard C library functions such as printf() or strftime().
        Second, this wxLocale object becomes the new current global locale for the
        application and so all subsequent calls to ::wxGetTranslation() will try to
        translate the messages using the message catalogs for this locale.
    */
    wxLocale(const wxString& name,
             const wxString& short = wxEmptyString,
             const wxString& locale = wxEmptyString,
             bool bLoadDefault = true,
             bool bConvertEncoding = false);

    /**
        The destructor, like the constructor, also has global side effects: the
        previously set locale is restored and so the changes described in
        Init() documentation are rolled back.
    */
    virtual ~wxLocale();

    /**
        Add a catalog for use with the current locale: it is searched for in standard
        places (current directory first, then the system one), but you may also prepend
        additional directories to the search path with AddCatalogLookupPathPrefix().

        All loaded catalogs will be used for message lookup by GetString() for
        the current locale.

        In this overload, @c msgid strings are assumed
        to be in English and written only using 7-bit ASCII characters.
        If you have to deal with non-English strings or 8-bit characters in the
        source code, see the instructions in @ref overview_nonenglish.

        @return
            @true if catalog was successfully loaded, @false otherwise (which might
            mean that the catalog is not found or that it isn't in the correct format).
    */
    bool AddCatalog(const wxString& domain);

    /**
        Add a catalog for use with the current locale: it is searched for in standard
        places (current directory first, then the system one), but you may also prepend
        additional directories to the search path with AddCatalogLookupPathPrefix().

        All loaded catalogs will be used for message lookup by GetString() for
        the current locale.

        This overload takes two additional arguments, @a msgIdLanguage and @a msgIdCharset.

        @param domain
            The catalog domain to add.

        @param msgIdLanguage
            Specifies the language of "msgid" strings in source code
            (i.e. arguments to GetString(), wxGetTranslation() and the _() macro).
            It is used if AddCatalog() cannot find any catalog for current language:
            if the language is same as source code language, then strings from source
            code are used instead.

        @param msgIdCharset
            Lets you specify the charset used for msgids in sources
            in case they use 8-bit characters (e.g. German or French strings).
            This argument has no effect in Unicode build, because literals in sources are
            Unicode strings; you have to use compiler-specific method of setting the right
            charset when compiling with Unicode.

        @return
            @true if catalog was successfully loaded, @false otherwise (which might
            mean that the catalog is not found or that it isn't in the correct format).
    */
    bool AddCatalog(const wxString& domain, wxLanguage msgIdLanguage,
                    const wxString& msgIdCharset);

    /**
        Add a prefix to the catalog lookup path: the message catalog files will
        be looked up under prefix/lang/LC_MESSAGES, prefix/lang and prefix
        (in this order).

        This only applies to subsequent invocations of AddCatalog().
    */
    static void AddCatalogLookupPathPrefix(const wxString& prefix);

    /**
        Adds custom, user-defined language to the database of known languages.
        This database is used in conjunction with the first form of Init().
    */
    static void AddLanguage(const wxLanguageInfo& info);

    /**
        This function may be used to find the language description structure for the
        given locale, specified either as a two letter ISO language code (for example,
        "pt"), a language code followed by the country code ("pt_BR") or a full, human
        readable, language description ("Portuguese-Brazil").

        Returns the information for the given language or @NULL if this language
        is unknown. Note that even if the returned pointer is valid, the caller
        should @e not delete it.

        @see GetLanguageInfo()
    */
    static const wxLanguageInfo* FindLanguageInfo(const wxString& locale);

    /**
        Returns the canonical form of current locale name. Canonical form is the
        one that is used on UNIX systems: it is a two- or five-letter string in xx or
        xx_YY format, where xx is ISO 639 code of language and YY is ISO 3166 code of
        the country. Examples are "en", "en_GB", "en_US" or "fr_FR".
        This form is internally used when looking up message catalogs.
        Compare GetSysName().
    */
    wxString GetCanonicalName() const;

    /**
        Returns the header value for header @a header.
        The search for @a header is case sensitive. If an @a domain is passed,
        this domain is searched. Else all domains will be searched until a
        header has been found.

        The return value is the value of the header if found. Else this will be empty.
    */
    wxString GetHeaderValue(const wxString& header,
                            const wxString& domain = wxEmptyString) const;

    /**
        Returns the ::wxLanguage constant of current language.

        Note that you can call this function only if you used the form of
        Init() that takes ::wxLanguage argument.
    */
    int GetLanguage() const;

    /**
        Returns a pointer to wxLanguageInfo structure containing information about
        the given language or @NULL if this language is unknown. Note that even if
        the returned pointer is valid, the caller should @e not delete it.

        See AddLanguage() for the wxLanguageInfo description.
        As with Init(), @c wxLANGUAGE_DEFAULT has the special meaning if passed
        as an argument to this function and in this case the result of
        GetSystemLanguage() is used.
    */
    static const wxLanguageInfo* GetLanguageInfo(int lang);

    /**
        Returns English name of the given language or empty string if this
        language is unknown.

        See GetLanguageInfo() for a remark about special meaning of @c wxLANGUAGE_DEFAULT.
    */
    static wxString GetLanguageName(int lang);

    /**
        Returns the locale name as passed to the constructor or Init().

        This is a full, human-readable name, e.g. "English" or "French".
    */
    const wxString& GetLocale() const;

    /**
        Returns the current short name for the locale (as given to the constructor or
        the Init() function).
    */
    const wxString& GetName() const;

    /**
        Retrieves the translation for a string in all loaded domains unless the @a domain
        parameter is specified (and then only this catalog/domain is searched).

        Returns original string if translation is not available (in this case an
        error message is generated the first time a string is not found; use
        wxLogNull to suppress it).

        @remarks Domains are searched in the last to first order, i.e. catalogs
                 added later override those added before.
    */
    virtual const wxString& GetString(const wxString& origString,
                                      const wxString& domain = wxEmptyString) const;

    /**
        Retrieves the translation for a string in all loaded domains unless the @a domain
        parameter is specified (and then only this catalog/domain is searched).

        Returns original string if translation is not available (in this case an
        error message is generated the first time a string is not found; use
        wxLogNull to suppress it).

        This form is used when retrieving translation of string that has different
        singular and plural form in English or different plural forms in some
        other language.
        It takes two extra arguments: @a origString parameter must contain the
        singular form of the string to be converted.

        It is also used as the key for the search in the catalog.
        The @a origString2 parameter is the plural form (in English).

        The parameter @a n is used to determine the plural form.
        If no message catalog is found @a origString is returned if 'n == 1',
        otherwise @a origString2.

        See GNU gettext manual for additional information on plural forms handling.
        This method is called by the wxGetTranslation() function and _() macro.

        @remarks Domains are searched in the last to first order, i.e. catalogs
                 added later override those added before.
    */
    virtual const wxString& GetString(const wxString& origString,
                                      const wxString& origString2, size_t n,
                                      const wxString& domain = wxEmptyString) const;

    /**
        Returns current platform-specific locale name as passed to setlocale().
        Compare GetCanonicalName().
    */
    wxString GetSysName() const;

    /**
        Tries to detect the user's default font encoding.
        Returns wxFontEncoding() value or @c wxFONTENCODING_SYSTEM if it
        couldn't be determined.
    */
    static wxFontEncoding GetSystemEncoding();

    /**
        Tries to detect the name of the user's default font encoding.
        This string isn't particularly useful for the application as its form is
        platform-dependent and so you should probably use GetSystemEncoding() instead.

        Returns a user-readable string value or an empty string if it couldn't be
        determined.
    */
    static wxString GetSystemEncodingName();

    /**
        Tries to detect the user's default language setting.

        Returns the ::wxLanguage value or @c wxLANGUAGE_UNKNOWN if the language-guessing
        algorithm failed.
    */
    static int GetSystemLanguage();

    /**
        Get the values of the given locale-dependent datum.

        This function returns the value of the locale-specific option specified
        by the given @a index.

        @param index
            One of the elements of wxLocaleInfo enum.
        @param cat
            The category to use with the given index or wxLOCALE_CAT_DEFAULT if
            the index can only apply to a single category.
        @return
            The option value or empty string if the function failed.
    */
    static wxString GetInfo(wxLocaleInfo index,
                            wxLocaleCategory cat = wxLOCALE_CAT_DEFAULT);

    /**
        Initializes the wxLocale instance.

        The call of this function has several global side effects which you should
        understand: first of all, the application locale is changed - note that
        this will affect many of standard C library functions such as printf()
        or strftime().
        Second, this wxLocale object becomes the new current global locale for
        the application and so all subsequent calls to wxGetTranslation() will
        try to translate the messages using the message catalogs for this locale.

        @param language
            ::wxLanguage identifier of the locale.
            @c wxLANGUAGE_DEFAULT has special meaning -- wxLocale will use system's
            default language (see GetSystemLanguage()).
        @param flags
            Combination of the following:
            - wxLOCALE_LOAD_DEFAULT: Load the message catalog for the given locale
              containing the translations of standard wxWidgets messages
              automatically.
            - wxLOCALE_CONV_ENCODING: Automatically convert message catalogs to
              platform's default encoding. Note that it will do only basic
              conversion between well-known pair like iso8859-1 and windows-1252 or
              iso8859-2 and windows-1250. See @ref overview_nonenglish for
              detailed description of this behaviour.
              Note that this flag is meaningless in Unicode build.

        @return @true on success or @false if the given locale couldn't be set.
    */
    bool Init(int language = wxLANGUAGE_DEFAULT,
              int flags = wxLOCALE_LOAD_DEFAULT | wxLOCALE_CONV_ENCODING);

    /**
        @deprecated
        This form is deprecated, use the other one unless you know what you are doing.

        @param name
            The name of the locale. Only used in diagnostic messages.
        @param short
            The standard 2 letter locale abbreviation; it is used as the
            directory prefix when looking for the message catalog files.
        @param locale
            The parameter for the call to setlocale().
            Note that it is platform-specific.
        @param bLoadDefault
            May be set to @false to prevent loading of the message catalog for the
            given locale containing the translations of standard wxWidgets messages.
            This parameter would be rarely used in normal circumstances.
        @param bConvertEncoding
            May be set to @true to do automatic conversion of message catalogs to
            platform's native encoding. Note that it will do only basic conversion
            between well-known pair like iso8859-1 and windows-1252 or iso8859-2
            and windows-1250.
            See @ref overview_nonenglish for detailed description of this behaviour.
    */
    bool Init(const wxString& name, const wxString& short = wxEmptyString,
              const wxString& locale = wxEmptyString, bool bLoadDefault = true,
              bool bConvertEncoding = false);

    /**
        Check whether the operating system and/or C run time environment supports
        this locale. For example in Windows 2000 and Windows XP, support for many
        locales is not installed by default. Returns @true if the locale is
        supported.

        The argument @a lang is the ::wxLanguage identifier. To obtain this for a
        given a two letter ISO language code, use FindLanguageInfo() to obtain its
        wxLanguageInfo structure.
        See AddLanguage() for the wxLanguageInfo description.

        @since 2.7.1.
    */
    static bool IsAvailable(int lang);

    /**
        Check if the given catalog is loaded, and returns @true if it is.

        According to GNU gettext tradition, each catalog normally corresponds to
        'domain' which is more or less the application name.

        @see AddCatalog()
    */
    bool IsLoaded(const wxString& domain) const;

    /**
        Returns @true if the locale could be set successfully.
    */
    bool IsOk() const;
};




// ============================================================================
// Global functions/macros
// ============================================================================

/** @addtogroup group_funcmacro_string */
//@{

/**
    This macro is identical to _() but for the plural variant of
    wxGetTranslation().

    @return A const wxString.

    @header{wx/intl.h}
*/
#define wxPLURAL(string, plural, n)

/**
    This macro doesn't do anything in the program code -- it simply expands to
    the value of its argument.

    However it does have a purpose which is to mark the literal strings for the
    extraction into the message catalog created by @c xgettext program. Usually
    this is achieved using _() but that macro not only marks the string for
    extraction but also expands into a wxGetTranslation() call which means that
    it cannot be used in some situations, notably for static array
    initialization.

    Here is an example which should make it more clear: suppose that you have a
    static array of strings containing the weekday names and which have to be
    translated (note that it is a bad example, really, as wxDateTime already
    can be used to get the localized week day names already). If you write:

    @code
    static const char * const weekdays[] = { _("Mon"), ..., _("Sun") };
    ...
    // use weekdays[n] as usual
    @endcode

    The code wouldn't compile because the function calls are forbidden in the
    array initializer. So instead you should do this:

    @code
    static const char * const weekdays[] = { wxTRANSLATE("Mon"), ...,
    wxTRANSLATE("Sun") };
    ...
    // use wxGetTranslation(weekdays[n])
    @endcode

    Note that although the code @b would compile if you simply omit
    wxTRANSLATE() in the above, it wouldn't work as expected because there
    would be no translations for the weekday names in the program message
    catalog and wxGetTranslation() wouldn't find them.

    @return A const wxChar*.

    @header{wx/intl.h}
*/
#define wxTRANSLATE(string)

/**
    This function returns the translation of @a string in the current
    @c locale(). If the string is not found in any of the loaded message
    catalogs (see @ref overview_i18n), the original string is returned. In
    debug build, an error message is logged -- this should help to find the
    strings which were not yet translated.  If @a domain is specified then only
    that domain/catalog is searched for a matching string.  As this function is
    used very often, an alternative (and also common in Unix world) syntax is
    provided: the _() macro is defined to do the same thing as
    wxGetTranslation().

    This function calls wxLocale::GetString().

    @note This function is not suitable for literal strings in Unicode builds
          since the literal strings must be enclosed into _T() or wxT() macro
          which makes them unrecognised by @c xgettext, and so they are not
          extracted to the message catalog. Instead, use the _() and wxPLURAL()
          macro for all literal strings.

    @see wxGetTranslation(const wxString&, const wxString&, size_t, const wxString&)

    @header{wx/intl.h}
*/
const wxString& wxGetTranslation(const wxString& string,
                                 const wxString& domain = wxEmptyString);

/**
    This is an overloaded version of
    wxGetTranslation(const wxString&, const wxString&), please see its
    documentation for general information.

    This version is used when retrieving translation of string that has
    different singular and plural forms in English or different plural forms in
    some other language. Like wxGetTranslation(const wxString&,const wxString&),
    the @a string parameter must contain the singular form of the string to be
    converted and is used as the key for the search in the catalog. The
    @a plural parameter is the plural form (in English). The parameter @a n is
    used to determine the plural form. If no message catalog is found,
    @a string is returned if "n == 1", otherwise @a plural is returned.

    See GNU gettext Manual for additional information on plural forms handling:
    <http://www.gnu.org/software/gettext/manual/gettext.html#Plural-forms>
    For a shorter alternative see the wxPLURAL() macro.

    This function calls wxLocale::GetString().

    @header{wx/intl.h}
*/
const wxString& wxGetTranslation(const wxString& string,
                                 const wxString& plural, size_t n,
                                 const wxString& domain = wxEmptyString);

/**
    This macro expands into a call to wxGetTranslation(), so it marks the
    message for the extraction by @c xgettext just as wxTRANSLATE() does, but
    also returns the translation of the string for the current locale during
    execution.

    Don't confuse this with _T()!

    @header{wx/intl.h}
*/
const wxString& _(const wxString& string);

//@}
