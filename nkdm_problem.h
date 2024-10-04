#include "stdint.h"

// blake2xb null-length string with output length of 64*128 bytes
const uint64_t nkdm_problem[][8] = {
    { 0x46ff7285451b9327, 0x00ff0085575944bc, 0xa7665853fec68932, 0x9c6e537e2ce985d3, 0x76b15be2404ec3fc, 0x462d84186a7c2a16, 0x406c2295896d37b2, 0x8d4b9f9b15e679c2   }, 
    { 0x932260da26a3dc0a, 0xac8d98fb5d79aa28, 0xb6b4e8e9925ea993, 0x8e7a6a95c47cf5f7, 0x9e90ef68ab0c9148, 0xbde5fb7d0a85f36a, 0x917401f069c76e51, 0xfbab212cb285233d   }, 
    { 0x206241c6344f848e, 0x5f7950ef76952e13, 0x1b02104d98e1b319, 0xcee08d70b6bcb21d, 0xa11629b588f3712a, 0x5c3fb8e169d1aa87, 0x0b2a6c864929ba26, 0x991965c716a55404   }, 
    { 0x9b18019a754fda8f, 0x28f98dcf253798b8, 0x444d82e624f86cfb, 0xa0b363d20eca3695, 0x7c394895b06c867e, 0xda4c806d6a890a94, 0xdec9bb19fb393066, 0x739b37e06f363dcf   }, 
    { 0x5f607f8664a57ba0, 0x5dc4df17b3da6cf2, 0x551db6afbb4dfd10, 0xdbaf0fdfbaa8aa35, 0xc1b745f4d9d0887c, 0xec63747c21550cd3, 0x5d313e0d9dce5309, 0xed60b48c568e54c7   }, 
    { 0x09d7479e4a5fa38d, 0xf2f901b4bcbadad0, 0x4537e5e1b2475697, 0xce7548e64c1a43d3, 0xc89c3e425d82b2e8, 0x4895e2509401ad24, 0x4f5d08388600fa07, 0x6131b6a0cd70aa3a   }, 
    { 0x080e2de2d013793b, 0xd34fedb51271d87a, 0x9d104828f90cb149, 0xc3a78a7909a7c2d2, 0x69f121229d42d01b, 0x3c1248e670857007, 0xe26b723c17ad4447, 0x1991fecd61f32afa   }, 
    { 0xa50e8b0a4b46a273, 0x087d8e2d7aee2c34, 0x907ecf064771b2fd, 0xaf54d960c7bee40a, 0x6908193996fb7618, 0xc49c01a41092aa96, 0xb70dc1b64c3f9e81, 0xd3ea8f055d6b86c3   }, 
    { 0x80cf39a0f974b1ce, 0x0298232a734789cd, 0x2edafc4396c072ff, 0x2fc6f0a09b35c7c6, 0x2427d6fe0979218d, 0x5a51e8066c6fe0f7, 0x040cd5dbd2e09923, 0x126b951ed3dc6764   }, 
    { 0x93f9a0676ae994be, 0xfea9188156e2ef43, 0x87e0d5be478f6563, 0xb3846dfae945f300, 0x6621e1edc2107424, 0x927f12ad5a1ebdb6, 0xee44cbb6301d5e5d, 0x0fd85038343aaf3b   }, 
    { 0x40ae71dc697e483e, 0x33e5dd74433a77f6, 0x3b558fd20baf7f32, 0xa26fafc6311462f4, 0x8b17f2cc23243dd7, 0x30465185c0721ae4, 0x3ffd6730aee1073f, 0x897bdf6593547b2e   }, 
    { 0xf72ee3d939c291e6, 0xc7ec76888aab1fb9, 0x875f914816e4b8e0, 0xc3c18603a7a5ca97, 0xc69cf871e2d3d121, 0xa7816db8b286f81f, 0xf24ae8aff5d39c1b, 0x9af194f3bfc9cf81   }, 
    { 0xd0458711de38e237, 0x9a50304d1b11cb40, 0x485cb9acb671f028, 0x52456f50f00a397c, 0xc5939a86ea727f99, 0xac75c44e2402fbca, 0x900807a31cee5db2, 0x41a3e04fbc87fbb5   }, 
    { 0x057dd5b8fbd06667, 0xc047d1a47870be27, 0xcdad0fddd7fbb8c3, 0xebcfe9a98218605f, 0xad074a0822fe568d, 0xd3ecaa2b0642de47, 0x81ddf411e825f8b7, 0xc25d2c576ccc237c   }, 
    { 0xe42eb9b46ff6bfcb, 0x3af7c1673111012b, 0x83f6dd48f01cbf92, 0x8892ad811633fdf7, 0x2059c4164ba9d143, 0xae9c80b73b39755b, 0x4ca49b84c27ab36e, 0x6c0eb13424a8949b   }, 
    { 0xb860d62738dba22b, 0xd4d62f2c1d63147f, 0x62df472b709c16c5, 0x71dff5dfcfd9a910, 0xbecb361566187f28, 0xd8d04c9a4922ff84, 0xc2a5557bc16c48af, 0xc56743b66eaceb8c   }, 
    { 0x2195b83c9fca6863, 0x55270d18cc5b82bd, 0x6fcec1db377f49d9, 0x9546f5542123b20c, 0x537f413a7b256da6, 0x725b603e174fd201, 0x98812fd39b85d25a, 0x2c58f093de12d9dc   }, 
    { 0x1165ecf17b792cd6, 0x14dc6cf0087b3b63, 0x7d042c71f2d7d46f, 0x8b4845c5e3b89c46, 0xfb097488a2e2a12a, 0xa567575c91cdf0d7, 0x9129b205a69b3a02, 0xff2cdf9bd8f9a295   }, 
    { 0xe5e4641cac2a19e3, 0x2cd682a367acc207, 0x70590c0fb0a30a98, 0x3c64f2dab09b72f9, 0xf4b433fb12dd286f, 0x6958e38bce3e98ab, 0xe13103637f9944b9, 0x5c36ec784a10d6db   }, 
    { 0x2e536707856abc77, 0x3bbde1f2927f0fba, 0x73c767fb9b3ddd3b, 0x6fadddd1c39ebf66, 0x4e818a3fb6aafe91, 0x23d717581ab465f0, 0x5645b5dfbf195555, 0x1e1eb54796282101   }, 
    { 0x112588d0827f645c, 0x33a9e151793dfbba, 0x9c8a7fb36bd35df1, 0xe2742c43695ffa1e, 0xd7d91756d50a510f, 0x95c4bc2c79057ba8, 0xb3c6ff95e2010184, 0xc8dbbe54a7be12fb   }, 
    { 0xc65d436a610c9fe4, 0x89e77ef801922135, 0xeb39524e21f0e216, 0xd4562259ee698b40, 0xcb4e211c343b4abd, 0xc837b88b597799dc, 0x9de3190320981fd6, 0x4e141af5517c8967   }, 
    { 0x49224eb79e9e8c76, 0xb382e84c2d6e8547, 0x717bf955416cc10d, 0x345569bd6ce8866f, 0x862c14e1a112b960, 0x159b1c9abe86e444, 0xc9356949a71106bb, 0x61ddc73dd1b7f87a   }, 
    { 0x5c8c95ec03e03b73, 0x9aaecdea9a836ffc, 0x740840c9d0c9194b, 0x7c57135e443f7d1e, 0x3e044d36f011989f, 0x71032567b81f8cf7, 0xf10ce1f7ab80aa44, 0xc497b3d80725554c   }, 
    { 0xb6f74ac8039ab472, 0xad6fac034e98eb8f, 0x7270e7eb84eaa4e8, 0x8eea5931b624b838, 0x723fa81d89137999, 0x1b63f366d55d6f33, 0xe4c888771fd12eb0, 0x30ac4ecee5adf3c0   }, 
    { 0x27accc724c9c4f45, 0xf16a57246b10e7c5, 0x33f11fca6ac2195d, 0xf6f8bbf5bf26ee14, 0x46629da910c49800, 0x05bdc971cae60bba, 0x7d589410dcb1d3b2, 0xf1b7b3996473e1d3   }, 
    { 0x2279d57054cab7f2, 0x44e6bbbba32d8d52, 0x17da5be33695273a, 0x5ff1d12035c105a4, 0x07c73a8b44ae8d64, 0x4c88490b129565cc, 0x2a08d70734c5e157, 0x3bca52dbc4c147c3   }, 
    { 0xecd68d0552d46c38, 0x547a0ba402ec7c87, 0x98e84ecc4a644e30, 0xebfda85de13485bf, 0xc13d185aa22ef3c7, 0x065c3ae302c89477, 0x3f4f734cea68100d, 0x891329170f7498a0   }, 
    { 0xbd324b09f895c74c, 0x2628edc735d2adf4, 0xf44395986ea65ccc, 0xf5a6b9b503c0adfa, 0xab5a43b7dfe7c905, 0x370ea209e0ca3257, 0xd593e34a53ac504b, 0xa62cc560bd596320   }, 
    { 0x53b9a676a8057ca6, 0xd9d4ccfbbf28cfa2, 0x1095283d64664d2c, 0x76bccd0aeb937691, 0x604406aa8d767137, 0xb72b55694e6d95cc, 0xd57c6c20975bd99a, 0x9aa8c7804e104582   }, 
    { 0xbde3bb416e202ea5, 0x9d66598356cea1c3, 0x2588f42e57cfd6f9, 0xbb70f0344d7658fe, 0x2ffab6792ea7ab1f, 0x282b6de977deb3b2, 0xdac42ac1991ae82b, 0x1137b8d29c8783d6   }, 
    { 0x1bd6d6f86cd40271, 0xc52df4a82b8c676b, 0x5505213c60dafae0, 0x5baa7c6c2f8066c2, 0xc2f94ac30c6526cb, 0x8017fd006fbcd272, 0x0713db9b9e73f87a, 0xbb3f75ef57a06cff   }, 
    { 0xa0b29895638b476d, 0x5553103a81f6a36d, 0xa9d4215409d6510d, 0x8b1421b72ea14dfd, 0xd5d0dd1daac21bc5, 0x09d8655991206e4b, 0xe843040516e70dd7, 0xa56b675781245de2   }, 
    { 0x10214ddd4fa51532, 0x5283e8a08982f48e, 0x0eeae5e658912f78, 0xb0071c4bd7b6cd5f, 0x3aed4c36c9ddee21, 0x1c91422f296ebb94, 0xe9d7621bd24fc863, 0xc94f5b62d3d70284   }, 
    { 0x5408517590fa2aed, 0x557d506ba1559eaf, 0xb49307c4fc9a842e, 0x423f07c3fb6d78ce, 0xc7c45d917f82e6a7, 0x76e4a42de2b1f942, 0x8a91c9ba93dc10fb, 0x673ad7949cc57198   }, 
    { 0x7dda5f727a49f7a0, 0xbc31cdd9d5a9aca9, 0x447e52d1a0df6410, 0x20f39bd787506dd1, 0x7ca58fef0e7504a4, 0xed5f11314b667c01, 0xe56fe8bf02fc4808, 0x21df6adab85f5ac5   }, 
    { 0xbea265e975dd30c5, 0xd0d0d148fb7e04f0, 0xd2e6103df3897430, 0x25e57b84ec02a501, 0x755384864adfc1a5, 0x69388e5a5a19b18a, 0x4b351f8ad9ef927e, 0x5e288516bb725a27   }, 
    { 0x3c75b0edc47fdfc9, 0x4b4bd1b35dd6dc56, 0x6cae3ebbe0cf4ca9, 0x89cc78db5307989b, 0x66d342b654dd9551, 0x59ce9e90ae8e7610, 0xf69f93d9416a6302, 0xb86741668195a361   }, 
    { 0x7d49b0244af3f7a8, 0xd61ea9eacb2155f9, 0x519caead9efc9323, 0x118133a341d3da7e, 0xe340f0ee35ef21fe, 0xa5aab60aee020212, 0x45f23c08464afa4b, 0x4cd9edf6b76cb20f   }, 
    { 0xfede421d44f5e6b1, 0xf9821c21bc238eed, 0x2fc785d9501abfe9, 0xff37a00bd116c40a, 0xe4081abbfba718de, 0x77992d1fee63d260, 0xb0c831b409217dee, 0xa7d585554058bf66   }, 
    { 0x3e70d13d5bd7e133, 0xaf017df5b5369c1d, 0xe705df31fe1ec687, 0xd2afd70743ced663, 0x82d44e3aa61574f1, 0x62dc09a7ad8bf934, 0xde7d0c86131758e1, 0x17a6ca0be9b85528   }, 
    { 0xfbc3f42048ed68d9, 0x6496192dc804a81c, 0x7213419eebcc1ec4, 0xd969cab0a5ccf9b7, 0x043a92446d66b365, 0xdf0f3bbca736f162, 0xcfbc9e76e3f616a8, 0x08da95fdc387639f   }, 
    { 0x7295bcf3c704c5b1, 0x52deed9d0ca44c72, 0x18224e39a887c418, 0x94dbebafca0d8ec9, 0xac29f682bde1c91f, 0x3f7ad5e86f067d34, 0x8df1a733751a04a7, 0xb5ace2d25ee2f32a   }, 
    { 0x676954a0333cae9c, 0x9ecf5674837a4c72, 0x3d142f9f26fcf956, 0xa3df1a67ed685af7, 0x51e5c9d69159bdaf, 0x1abc9ab56dd1931b, 0xab94e690c7f41eed, 0x93bb83aa6e4498e1   }, 
    { 0xba997f4dc394d426, 0x5e7f723f92c0f690, 0x2ae53a6d6f6a43ae, 0xeb8e9316a21b13b6, 0x27852e1caa3f1bd5, 0xf01aeb4581f615bc, 0x4902a1f7ad886fa9, 0x148733436635d68d   }, 
    { 0xa81f7cdf700788a4, 0x458e5c492dd953d8, 0x3c7a9a163eabcd03, 0xb2e488ccbb6b5c3e, 0x1c7fb817aecc154f, 0x5a7ef5f6f01fa9aa, 0x8f28b65c92f57bb7, 0x91bf5409d1cea9b5   }, 
    { 0x00cb9c8762aaa5ac, 0xb5b78645e279bd4e, 0x50832fbb8d13f2a6, 0x42fea0131bc96540, 0x3be6152c760b8ee5, 0xbd169f26c26b1e9c, 0xfde708f09491f952, 0xfcd1db803057d522   }, 
    { 0xe4fbd4c7c7561271, 0x9320e3dfc07a99f3, 0xf6be4f7661465492, 0x7442857d783ca1a9, 0x57142c0c653d28af, 0xde454a0df13873cf, 0xac7e882ccf6ccfd1, 0xd58abf1dc505c695   }, 
    { 0xaa41aef7e778e524, 0xc03e96532a61f1e3, 0x036e792946f99fc0, 0x61ce50bd318920f9, 0xf8d0cbd26b39cc12, 0x661503ee095fd730, 0x88ea2904f7334b6c, 0xf214ec5bf95fd48a   }, 
    { 0xc00a41afe3cc25a9, 0x6d40901970352eae, 0x3baef9f165bab151, 0xb3a5a78c03d57cc8, 0x6d9d2fe8c2941968, 0xd521ba00a53f9931, 0xa1cfd26f2822e826, 0x975ff27943eef747   }, 
    { 0x2177fe3b62ae0bed, 0x0168de3471e31766, 0x651a6cdca87c4a41, 0x23f6ba7f3a387549, 0xeb066c962bfeafcc, 0x3da7fa062e9e10e9, 0x5317d7be37f27345, 0x71c934b1dcc72368   }, 
    { 0xd50344f23b3b5152, 0x7f39e74106777500, 0x17f2c6468f6d04e1, 0x674abec8fe55dca0, 0xda3fba2013583daf, 0x4a8e3dad305b03f3, 0x5d372d217aae45a7, 0xceee34a215374a7e   }, 
    { 0xc2bf920b8f1d47f7, 0x9a62ed19cb7cdd91, 0x785186b45a272757, 0x837a1254286327be, 0xfde2ba7189ff7119, 0x6b3dc4167fdccacb, 0xa4c146735a5f240e, 0xfbdb84bfa6dc4b53   }, 
    { 0x5f2373231a09aecb, 0xa4d2ab0690689d5d, 0x08bff58746551d31, 0x88e1c3e859a9f451, 0xac06577c790066ca, 0x44e7cf2d59efe86c, 0xd87a65ee80be04c1, 0x420435add8403572   }, 
    { 0xb0fc7569ec1c8a3e, 0x8680fd797a01a774, 0xa2f2d833b989c4f7, 0xa44f34ab89c4a5d5, 0x58498a1d00ce1b83, 0x54502bd62dbd2842, 0x0470a19f52ae7f36, 0x04a23e2c24692aa3   }, 
    { 0x2972bcf7c17803a1, 0x3c20648a5d195bac, 0xb537ec87986b2d2f, 0xef80838430b325c3, 0x5d9abdbc4b230ff8, 0x7e87026433316095, 0x05464c25f4ab94fc, 0x9a03d422afd3ff04   }, 
    { 0x9b9df44f5e8c74a3, 0x7d8d5aadd62c95c2, 0x62b1ccafaf82ea10, 0xafb8f928bc0efe42, 0x42c0f1258524724d, 0xc005e0f0c0f9d9c6, 0x5d75dd660234b49d, 0x54c9e3e253aa7b41   }, 
    { 0x8dc37552fb0103e0, 0x935af954d3c9e758, 0xc1c2769c51fd2f73, 0x3abfb6358cb0fa01, 0x734271b6e352ba9f, 0x64584a1470d18f5f, 0x12526d83413a889d, 0x9f92e4006a92d752   }, 
    { 0x1f133737d5834415, 0x22bd1f54be31c078, 0x68af8f7657cb0503, 0x31d9f319fdd3ee43, 0x4829116e842cbbdc, 0xa846e028e12bca05, 0xc477a3ff1fd3abcf, 0x4d33ce94442c2977   }, 
    { 0x649b3328093c125a, 0x1eb32d96ade3c1f7, 0xc12bb64b380c09b5, 0xb88d51b3b3166d78, 0xb3f885c4844121bd, 0x4d87d99df5201118, 0xc5a2ba8e7d23552d, 0xe24ab70f2f97e2fd   }, 
    { 0x66bf67fd6d982d24, 0xde02a7c401b7e73f, 0xc3c719b61df86308, 0x1cdb6dc573e68a96, 0x00dc8edbf95fbf44, 0x773a6661bf48d9dd, 0x33b41a90116ac61a, 0x772c331bec896f76   }, 
    { 0x4de099042f076b6b, 0x7998da238a08dd6d, 0xf16fd12b4b4abb5f, 0x18585d14d783a0dc, 0x644c592095897053, 0xaa6d5c4e3faceae3, 0x6ade10339b8a4a0a, 0x147e72cf3cceac0a   }, 
    { 0x8fba055a06ace18f, 0x5ac0251bd9e32d9f, 0x9a9bc0863ef19126, 0x890ca6fa9970186f, 0x40bfac729335856b, 0x7b29bf0bde3f03ea, 0xbf2426196b4c0a32, 0xa8217e5702613c69   }, 
    { 0x3c3239dfba6d6d32, 0xa8ceee21331080ac, 0xfa53c5f51f23ea2c, 0x0b5670a5e030af28, 0xd675f87586ea53c6, 0x9043fcc2b5d88f30, 0xed407f0c16bb9e82, 0x4dc3d3d01c5a6842   }, 
    { 0xa9af2dac440886e4, 0xde5713a6d155bb95, 0x3b0c3c6fc40a44eb, 0x3fdd65a93cf56177, 0x3122f6d761232d7f, 0xa750e7401d432548, 0x09644f85a3094504, 0x5cefee3482a1fce0   }, 
    { 0xf0abf2879665c55e, 0xe8466aa9cc9c4bea, 0x5b39e6f3a264384b, 0xc9fa75fa52914840, 0x0e6098d0a2f54171, 0x8a02bfe1890944c1, 0xbf7b2900e75149f3, 0x8b57aeb67e95d747   }, 
    { 0xee693f164f56e03f, 0xed1dde7fe86808a4, 0x2745167b3bc4a5ab, 0x579f3e342a530671, 0x955d48384f84acb3, 0x2670f7895d63c4ac, 0xbe1618d76d73f563, 0x7da144ae7b310fff   }, 
    { 0x49cd5b5ff8ee4798, 0xad3ab3ff36806865, 0xa51ec089b2ca7f1d, 0xc43294594868a515, 0x72e97e03b594bb44, 0xa3beef5935d2beb0, 0x9e02d4b3a2d99c69, 0x9690385c91e21ee3   }, 
    { 0x7da55a8ebbc8aa2b, 0x9119c031df718310, 0x754a75d6a9d9d2d4, 0x111a83cd3155e200, 0x2aeec4903a77df10, 0xd464394b7e0741a2, 0x74c0fbb613ba4c63, 0x03d47dbf874222bc   }, 
    { 0xc1c9226ebb6a8b44, 0x21bda74aa2427653, 0x0dd6f484111c3018, 0x0609696d4121823a, 0x9238ebd8d80b12f3, 0x49c766956447fd9a, 0x1877ded554d1799e, 0x1bcd797184fb6993   }, 
    { 0x34bc7d9cac602147, 0xbc82c7be40fd3f07, 0xe699b6fc14eb9042, 0x218e36536c784499, 0x388f76735e96572c, 0x4b913c745b68ec90, 0xe9e3fe238d7011cd, 0xef09aef6da4b8c06   }, 
    { 0xa7aea208f558e5b0, 0x2824c9dcb1532a46, 0x38800ae457d242c7, 0x70e2dc65506ffee4, 0xc7b8672ce2ffc1ec, 0x18ce75805ce0e38d, 0x47f42bf898c265a8, 0x0edc7e137f93c835   }, 
    { 0x6037bc8d49198f74, 0xd8f5e63568a92e1d, 0x1ba8a739cb080145, 0xfcecf45952186cf7, 0x07493b11e0049eb9, 0x4775370e338ae826, 0x0f5d14af3c3a4cc0, 0xe18cff055cbae27e   }, 
    { 0x5acf4f103a1d4aaf, 0xfb1f9fc051da9b06, 0x67e52bd9d420c2fe, 0x91b27f53b44fe22a, 0xc3a2b52abc2c5a21, 0x368586a5d8207bf3, 0x87733791830a7358, 0x3b671ab44a44fa29   }, 
    { 0x430330e41f2e4663, 0xf6781d979ecdf2c3, 0xa11387da3fdc4e6a, 0x7cf026f523a40f73, 0xeee9decdacea79bc, 0x319b61cab9e52d38, 0xe610de418c1fb759, 0xa65af59c0c6ea11e   }, 
    { 0x0c80b89bbcdd98e3, 0x39cdcdcbf029453d, 0x6f988088d8bbc9d0, 0x7913d9f4ab00c097, 0x84654848ff54f071, 0x556323d4a60ee446, 0x660cccec062d646a, 0xc4bf3224de30c79b   }, 
    { 0xfafb0cc09d228f4e, 0x88ebf6c11052ebc4, 0x9123fc904a3b079a, 0x779b75fcb5d6d26a, 0xc908bff886431f48, 0xb4a23ceca2a18170, 0x080067a4a71102ce, 0xd8e0a09e24f54651   }, 
    { 0xa2bf7e4ea4198fbf, 0x2550babab2a1a35e, 0x34fecf5014685079, 0x4f3e7524d536ded6, 0x2f2ebd18c831d017, 0x56f835affdaca920, 0x527c2fa6fecc5259, 0x7c236f416973d3da   }, 
    { 0x35395a8412eccbf2, 0x5a60622d7a1b1b34, 0x200076227aca6596, 0xfa96b3fa50282aa0, 0x856e53c8bf98fb53, 0xd0bc1b590488885b, 0xe92399d2cfefaad4, 0xb81ae84cb9c1943e   }, 
    { 0x31cb0380fc37a830, 0x5f3cb019c6ac3ba6, 0x59ee178db427cb8c, 0x68cf6c0d2f8dca13, 0xf09b7ff870231bcb, 0x717a36ae2ef0fc70, 0x19d3a5d713484b94, 0xe66df99357f4c0ba   }, 
    { 0x34416b8aa7bc505c, 0x7badfdfb1fe6bfd7, 0x7701056ced9c0322, 0x9da8302ae01e093b, 0xecb473e7940827b5, 0xafb6d6d23e8077c2, 0xc4f264a5d19e0c62, 0x1139e4d9b3945d97   }, 
    { 0x47620b973b841edd, 0x4531d3a16e081696, 0x2162f58810a19451, 0x0d0c8280a411c342, 0x985deef5d693a281, 0x5b849b9b658d3a96, 0xa9fa7956f954bbab, 0x8e56794cf7a43f69   }, 
    { 0xe497a2b187164f9b, 0x120fdd25ad55ccca, 0xc6c0f4d6d7ce33ae, 0x6481082078536dbc, 0x997a780c7801f68c, 0xdaa33cce6e94e6b4, 0xe5b3f66fadf222d0, 0xedd08cce023b578d   }, 
    { 0x77d6ffd8eee8bcb1, 0xf8c549944f4cf4b4, 0xd52f0b75d788dc1b, 0xb9b9a2f5e2befa29, 0xf81e10265085493e, 0x9b273dea8db25342, 0xda01145c9a38f774, 0x2c090e5d54aeafad   }, 
    { 0x9cadb07b8b28d69c, 0xe863ea1209a58dff, 0x504f5938678f6915, 0x4dfc2010c3b5fe32, 0x160250b7a0daed76, 0x97d491a0c2320a55, 0xeb1f1ee9c77c88a8, 0x2f94de8c0db45a64   }, 
    { 0xd4fef158fedc8086, 0x71d794a832865d81, 0x077539bbdc96393f, 0xa4b70d344cffa935, 0x7b081a6545a4b4ef, 0x88affe2a1ce7dd4c, 0x39d50060396885f2, 0x9f9bbc438f91a7a8   }, 
    { 0xf0b370c1d56542a7, 0x8056f6c0f423d3e3, 0x273f9ce7c623e00a, 0x262a94c49a516f6c, 0x05c6b90eb136f23f, 0x312749c9f2195123, 0xd727eae59ff55373, 0x03ea1d471e3054ff   }, 
    { 0xf97a5ffacb672b7e, 0xe5db89ebe4508c68, 0x5cfd2a2515fbf401, 0x7bdc075eb6b38ddc, 0x6d0f8e37fb901078, 0x5d4bc69a2c6a10a5, 0x7d301267924182b0, 0x31b8ef3f8faf2607   }, 
    { 0xd7e0fb51aee85bf4, 0xff682c66096e0416, 0x4d515fb3ff9e0165, 0x8db43f48c523d7ba, 0xb661586b18c2cf33, 0x68178a7cd97f38ef, 0x49e64ca2ae1d39a4, 0x4d9880ee77eafab3   }, 
    { 0x6e4627ceb675e2c7, 0x86f62cab1a33fac9, 0x725c3974263b815d, 0x6a9ede63cdf767b6, 0xc0cec2656feacae3, 0x7c0f85c6dbb5ddc4, 0xd479c6666ce1cfca, 0xd92255502af2037c   }, 
    { 0xca59c370cbbcbbec, 0x26298ffe89b9c72a, 0x9c61b08bcbc547ed, 0x8a6e810036d03e03, 0xbd3886257dd4f491, 0xd18736b80b9e342b, 0xce60351805a5cd74, 0xbc21d6f5b2a4dbc9   }, 
    { 0x9e5ca3857351338e, 0x11442b35a4032638, 0xd64f13279ebf5703, 0xc0678d9ea7dc9ced, 0xab41fa9ac7d9f897, 0x7349546a383679fa, 0x5513e09c6fd50440, 0xdebd4783f0e7c003   }, 
    { 0x15d58d95b499241f, 0xe7907ea0954af880, 0x6ad12e1c308f2884, 0x1ff42f998fa8c72b, 0xe1e6fc7c415766dd, 0xfbf563460af324b2, 0xed6797c622450964, 0xdc4796beb213f81e   }, 
    { 0x7bf980975077bb3a, 0x473777fc47e64697, 0x4d3bc1288b730b09, 0x009b330fb045d32b, 0xc4ad7096a9c8ed4e, 0x23a0b296cefe2829, 0xe5baa7e12326ff59, 0x4dfa94d70671c165   }, 
    { 0x1d118bed73ce39ed, 0x8ba9422d95d437ce, 0xbf2ee31bf500856d, 0x27e22a19ddeb3c66, 0x440abc07e06a7f8a, 0xe2415988cb33b650, 0xd8b7207200e96f73, 0x5aec786f914cf030   }, 
    { 0x24b1b5690c3043a1, 0x06b375f0dae24061, 0xac2000187e696af6, 0xb3309b16e18ea137, 0x29cd3b02685395fc, 0xae9c5f39848901d1, 0x3d44fbc762c3228c, 0x04cea0998a115275   }, 
    { 0x420babef3a90f098, 0x988d63f8e8fd6f6d, 0x9192d8aaa6aa1974, 0x8a2e41863e17511c, 0xfb94800ebb192a09, 0x31c70d641b880d0a, 0x0cb6af0be28a66da, 0x9543a2c206c888b0   }, 
    { 0xe21edef946e46152, 0x5dda56825a17595b, 0x1a5454856572022e, 0x796e386110c07b63, 0x675d2ecf48443662, 0xfb4c9089f0b35ddd, 0x85fa9bcf87df4fb7, 0xf7cb35dbf46a819e   }, 
    { 0xd7c3363e6ece38bf, 0x39adfa6f37cd409b, 0x8341788bcb9ab43e, 0xc7e89d9eda2e9929, 0xf4263b327e2486b0, 0xd20191b09ddaeea4, 0x045d2818c5dbec64, 0xd7b6ac35257b133a   }, 
    { 0x64de7cce327ffdec, 0x5d1525c518b36c3d, 0x7b53d98ab599dff4, 0xc977adebaa223361, 0xe6c26a99e2ba577d, 0x8eb28bdff5ab540a, 0x59149d73eaacebb9, 0x9826154a846208d6   }, 
    { 0x1afda003a6f92678, 0xc1975c389f78557f, 0xb080d6907664d9fe, 0xee0312050d4f0aa4, 0x46d9197d88bb6741, 0x8358dafd42ba5fd0, 0x87a5151d65b44a7e, 0xdb40158bf687afc9   }, 
    { 0x8d9ed82950c188ad, 0xa90d0333835805a5, 0x863f74ff6b56995f, 0x88a0c703d9b79bc9, 0x05d889537359d0aa, 0x8942dedbb464eb28, 0x168679b093e44613, 0x65c602b36bdc1993   }, 
    { 0xa3bac29195f06ca9, 0x1a86068768bf54d5, 0x9b62f9b878c315eb, 0x4a784671a95918c3, 0x5c673e4cac19e6b0, 0x425745805aa65aca, 0x7f7f3b8f586f0b4b, 0xedb61331029dd320   }, 
    { 0x5386d4b94f31fac3, 0xb1580665695a68d4, 0xf010b9b6569730a4, 0x2eda1700a899ffdd, 0x2b42cdb5e7e3b342, 0xcf9245dff82d26df, 0x918b80df86f6bea3, 0x383be8a4024c8e2a   }, 
    { 0x450ac3a5b0884ebe, 0x2f53cf8dad83240a, 0x6aeda9aff45a5ffc, 0x10ec5c9e151d5184, 0xac5d6ddfdca856ff, 0x4f2b73f05b4fd13d, 0x50b39ec9bd2ec384, 0x8e4deae7ce18500b   }, 
    { 0x40119db1414d1406, 0xa234cac9bb481653, 0xda342e56d863989d, 0xb45953e03776d59e, 0x32ab7ba4a7b6369c, 0x0e167d62ba91711f, 0xe8b87bf3b0c210ce, 0xdf0d75af378e8da7   }, 
    { 0x04b94ea58981376c, 0xca47f785174c3e3f, 0xe883cb49d28265e3, 0x0ccc0c2952b7fabb, 0x96e84a9de310afad, 0x988ebc2032c120c9, 0x9df805a91b84c6f0, 0xa6c757b5a111212f   }, 
    { 0x33a93a0290209153, 0xb2802802d51c7058, 0x7c6518ac14fad051, 0xd149c28b9d93508d, 0x2533ccb5158efd0f, 0xf9dbabb405c286d3, 0x5b680645cb6a9a37, 0xa9f8c5bcfb63bd63   }, 
    { 0xa6337542c16d1ef7, 0x7b22d0347c6855e1, 0x1ade9ba73cffeef5, 0x136f71749abcdc45, 0xea00b657e0f1c82e, 0x16ad811eba41f45b, 0x35e7234e9874a122, 0x4df24635e857b3c8   }, 
    { 0x4cce90be934c5b46, 0xaebb520d2e4f57a3, 0xfa849d317d3f4ef8, 0x5952f9dadceb8711, 0x12768dcec1433720, 0xa44a4b5b2335bb0a, 0x290510ed7f80521a, 0xdb1b5dd60f0b390c   }, 
    { 0x2733f5f0b83ebe0e, 0x226f4ceeb26026a2, 0xcfa683875f7aa466, 0xf38b2a730d59a412, 0x4d1e00a40db575dc, 0xf29b35e510e4cd03, 0x3827bcddff7d3d05, 0x633146b9176e49df   }, 
    { 0x9fce5a5770a6ec58, 0x51cd2fadcf97ae1e, 0x3b4fca25aeaa3e0f, 0xf0b6b35b283f2fb0, 0xfc936e204c552cf8, 0x6ac46ad0cd61220c, 0x697d0338d32ab0f2, 0x572e3fd6e2aa0d6b   }, 
    { 0x9cd4055dbf5d56c4, 0xe87bed79b3b7ff24, 0x9d6756217866af2c, 0xf79fc860a517dfca, 0xed9eb79dab0bbdda, 0xde4e16a6ac9fa0c0, 0xef5f57ab1271b494, 0xa13f714334cde0c0   }, 
    { 0xbc73bf3b057842f3, 0x453ab5429ed7e815, 0xd9aec8484015f56c, 0x0d431718a2447a13, 0x2f5d830e9dfa240c, 0x23f2c9a3ca5c70c6, 0xa2bd1945f38a41ed, 0x545d7ea3b3255a0c   }, 
    { 0x7065b549607ab7ea, 0x01cc5afe3fcb9e5c, 0xb80a9a149752b3a6, 0xe057349cfffc7568, 0x518e62443a2461d5, 0x9454f11eeebf7f83, 0xf204d518201ac113, 0x6f3457be76bb33a9   }, 
    { 0x976e98956036e9d6, 0x2839578e0751138c, 0x101e1e5f5e9f4a31, 0x400b4ff4d13fbe4a, 0xedb9263d7786600a, 0x5c9f38205a436269, 0x592f46a1e5ae4e58, 0x8a47ce061e34c885   }, 
    { 0x200dddd8440e714d, 0xf3da21adc55d8ad0, 0x9aabde64949abcaf, 0xb6151760da194e27, 0x0230a9bd4ec79eda, 0xeae2bf5f991ba9ba, 0x8aa14c9a6c23c1e4, 0x27ae2344746bebcb   }, 
    { 0xca250ae34bb7c691, 0x3bedfc841dd1eb2b, 0x2d8643b8b2bbb2b0, 0xdee6bfd512db5e20, 0x4acff65e6ec75dae, 0x2bd960a554f7ccfe, 0xd2133338400ea23b, 0xd6f6213888a464a1   }, 
    { 0x08b228d7f4fd90e0, 0xb1dbb2a9a947b7d3, 0xf8e7a408735bc008, 0x72b0adac7bf889b9, 0xaf2e5848fbcfa804, 0xfec6293e41eb02e6, 0xc0c04b73458bccf1, 0x7780a7f5ca17452c   }, 
    { 0x04e2f901e988b2d6, 0xa2a682f5174b2b3b, 0xbcba41bf2dc1e591, 0x7ff99a00d72d3e30, 0xc8ab6b683f5d1822, 0xcc48a447a5221fdb, 0x10b9650833423b15, 0x94507f5efedeb809   }, 
    { 0xfee2e7dad8f92f6d, 0xc8c83a88ea8b6b98, 0xa4098b23ef8ebf30, 0xc70180686c009917, 0xe9db70a47e66fc52, 0x0dc8b1d9812fc61f, 0xfd9fad8626c5d997, 0x254052369bcdb4a9   }, 
    { 0xc730adad157defe0, 0x4f9999a75fb8b36e, 0x9fea17eb727d13e3, 0x24a959376409e742, 0x02edf792115205a5, 0x01bf8e0916d2a99e, 0x15f25cf4ede3985d, 0xcfe16c4b740b3d58   }, 
    { 0x726075ee0878d185, 0x0435a7dcbbd5a1a3, 0x2f8c701563542bd6, 0xdf43e1e75bdcb6d9, 0xa4f7a70adc9505fa, 0xfe35a591ed7c0835, 0xf1819cf64aa07f2d, 0xc4785ee4bcdb5463   }, 
    { 0xc11a18252ae57ce8, 0x58d45be421c88d49, 0x4f3f8c73d4b2d206, 0xc85208febb74d984, 0xc3bf5f8d17592a65, 0xd1017e076619698f, 0xed0658971555cf66, 0xb2988d2b324c2215   }, 
    { 0xf39b263b6e031b0e, 0x0ce999638756be6a, 0x57244db955f3bf13, 0xb6e4f2fef930ec78, 0x1e8731c6cd5bcd59, 0x7b9b59443df441bf, 0x6aa0603bfca84ebb, 0x47e16f831be3b410   }, 
    { 0xb96ddc917c53d210, 0x962478dadb33ea82, 0xebe9407a3e2ad307, 0xf1a58008d492494a, 0x7bd76f94c33d5df5, 0x2f11d51ce4d80c4e, 0x7029111448db2b73, 0xc4de09a24b176d0c   }, 
    { 0xf15fbc8ee660ef23, 0xd4abda31f1bc4f98, 0xcc0a4c4ad363e7fa, 0x4d76ea2c5dc05ddd, 0xbf4c1814d048cbb1, 0xe7d57420af4e4ea1, 0xaf017cd0510aa41f, 0x2b1184285069c87e   }, 
    { 0xbd280f05d01c325d, 0x9dfde0d1e1ba87b5, 0xe5d85722e0f979ff, 0xcb29864ad9ae09e4, 0x4ec525f8655b787a, 0x4351e943b5e1da8c, 0x5f69b9a74b7bda69, 0x85ea2690d2ba18b2   }
};
