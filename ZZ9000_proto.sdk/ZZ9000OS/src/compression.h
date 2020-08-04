void decompress_rle_smush1_data(uint8_t * src, uint8_t * dst, uint32_t size, uint16_t w, uint16_t h, uint16_t pitch);

void Codec37Decoder_Init(int idx, int width, int height);
void Codec37Decoder_decode(int idx, uint8_t *dst, uint8_t *src);
int Codec37Decoder_GetCur();
void Codec37Decoder_Next();
