class Font {
public:
    static Font& get(const std::string& name){
        static std::unordered_map<std::string, Font> fonts;
        return fonts.try_emplace(name, Font()).first->second;//2445
    }
};
