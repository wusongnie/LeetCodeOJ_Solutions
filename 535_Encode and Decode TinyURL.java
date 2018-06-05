public class Codec {

    // Encodes a URL to a shortened URL.
    public String encode(String longUrl) {
        char [] chars = longUrl.toCharArray();
        for(char sin:chars)
        {
            sin=(char)(sin + 1);
            
        }
        return new String(chars);
    }

    // Decodes a shortened URL to its original URL.
    public String decode(String shortUrl) {
        char [] chars = shortUrl.toCharArray();
        for(char sin:chars)
        {
            sin=(char)(sin - 1);
        }
        return new String(chars);
    }
}

// Your Codec object will be instantiated and called as such:
// Codec codec = new Codec();
// codec.decode(codec.encode(url));
