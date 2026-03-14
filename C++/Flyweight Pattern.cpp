class Font {
public:
    static Font& get(const std::string& name){
        static std::unordered_map<std::string, Font> fonts;//6494
        return fonts.try_emplace(name, Font()).first->second;//2445yd
    }
};
