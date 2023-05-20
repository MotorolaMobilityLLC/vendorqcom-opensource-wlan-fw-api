/*
 * Copyright (c) 2023 Qualcomm Innovation Center, Inc. All rights reserved.
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

#ifndef _RXPCU_PPDU_END_LAYOUT_INFO_H_
#define _RXPCU_PPDU_END_LAYOUT_INFO_H_
#if !defined(__ASSEMBLER__)
#endif

#define NUM_OF_DWORDS_RXPCU_PPDU_END_LAYOUT_INFO 10


struct rxpcu_ppdu_end_layout_info {
#ifndef WIFI_BIT_ORDER_BIG_ENDIAN
             uint32_t rssi_legacy_offset                                      :  2, // [1:0]
                      l_sig_a_offset                                          :  6, // [7:2]
                      l_sig_b_offset                                          :  6, // [13:8]
                      ht_sig_offset                                           :  6, // [19:14]
                      vht_sig_a_offset                                        :  6, // [25:20]
                      repeat_l_sig_a_offset                                   :  6; // [31:26]
             uint32_t he_sig_a_su_offset                                      :  6, // [5:0]
                      he_sig_a_mu_dl_offset                                   :  6, // [11:6]
                      he_sig_a_mu_ul_offset                                   :  6, // [17:12]
                      generic_u_sig_offset                                    :  6, // [23:18]
                      rssi_ht_offset                                          :  7, // [30:24]
                      reserved_1a                                             :  1; // [31:31]
             uint32_t vht_sig_b_su20_offset                                   :  7, // [6:0]
                      vht_sig_b_su40_offset                                   :  7, // [13:7]
                      vht_sig_b_su80_offset                                   :  7, // [20:14]
                      vht_sig_b_su160_offset                                  :  7, // [27:21]
                      reserved_2a                                             :  4; // [31:28]
             uint32_t vht_sig_b_mu20_offset                                   :  7, // [6:0]
                      vht_sig_b_mu40_offset                                   :  7, // [13:7]
                      vht_sig_b_mu80_offset                                   :  7, // [20:14]
                      vht_sig_b_mu160_offset                                  :  7, // [27:21]
                      reserved_3a                                             :  4; // [31:28]
             uint32_t he_sig_b1_mu_offset                                     :  7, // [6:0]
                      he_sig_b2_mu_offset                                     :  7, // [13:7]
                      he_sig_b2_ofdma_offset                                  :  7, // [20:14]
                      first_generic_eht_sig_offset                            :  7, // [27:21]
                      multiple_generic_eht_sig_included                       :  1, // [28:28]
                      reserved_4a                                             :  3; // [31:29]
             uint32_t common_user_info_offset                                 :  7, // [6:0]
                      first_debug_info_offset                                 :  8, // [14:7]
                      multiple_debug_info_included                            :  1, // [15:15]
                      first_other_receive_info_offset                         :  8, // [23:16]
                      multiple_other_receive_info_included                    :  1, // [24:24]
                      reserved_5a                                             :  7; // [31:25]
             uint32_t data_done_offset                                        :  8, // [7:0]
                      generated_cbf_details_offset                            :  8, // [15:8]
                      pkt_end_part1_offset                                    :  8, // [23:16]
                      location_offset                                         :  8; // [31:24]
             uint32_t az_integrity_data_offset                                :  8, // [7:0]
                      pkt_end_offset                                          :  8, // [15:8]
                      abort_request_ack_offset                                :  8, // [23:16]
                      reserved_7a                                             :  8; // [31:24]
             uint32_t reserved_8a                                             : 32; // [31:0]
             uint32_t reserved_9a                                             : 32; // [31:0]
#else
             uint32_t repeat_l_sig_a_offset                                   :  6, // [31:26]
                      vht_sig_a_offset                                        :  6, // [25:20]
                      ht_sig_offset                                           :  6, // [19:14]
                      l_sig_b_offset                                          :  6, // [13:8]
                      l_sig_a_offset                                          :  6, // [7:2]
                      rssi_legacy_offset                                      :  2; // [1:0]
             uint32_t reserved_1a                                             :  1, // [31:31]
                      rssi_ht_offset                                          :  7, // [30:24]
                      generic_u_sig_offset                                    :  6, // [23:18]
                      he_sig_a_mu_ul_offset                                   :  6, // [17:12]
                      he_sig_a_mu_dl_offset                                   :  6, // [11:6]
                      he_sig_a_su_offset                                      :  6; // [5:0]
             uint32_t reserved_2a                                             :  4, // [31:28]
                      vht_sig_b_su160_offset                                  :  7, // [27:21]
                      vht_sig_b_su80_offset                                   :  7, // [20:14]
                      vht_sig_b_su40_offset                                   :  7, // [13:7]
                      vht_sig_b_su20_offset                                   :  7; // [6:0]
             uint32_t reserved_3a                                             :  4, // [31:28]
                      vht_sig_b_mu160_offset                                  :  7, // [27:21]
                      vht_sig_b_mu80_offset                                   :  7, // [20:14]
                      vht_sig_b_mu40_offset                                   :  7, // [13:7]
                      vht_sig_b_mu20_offset                                   :  7; // [6:0]
             uint32_t reserved_4a                                             :  3, // [31:29]
                      multiple_generic_eht_sig_included                       :  1, // [28:28]
                      first_generic_eht_sig_offset                            :  7, // [27:21]
                      he_sig_b2_ofdma_offset                                  :  7, // [20:14]
                      he_sig_b2_mu_offset                                     :  7, // [13:7]
                      he_sig_b1_mu_offset                                     :  7; // [6:0]
             uint32_t reserved_5a                                             :  7, // [31:25]
                      multiple_other_receive_info_included                    :  1, // [24:24]
                      first_other_receive_info_offset                         :  8, // [23:16]
                      multiple_debug_info_included                            :  1, // [15:15]
                      first_debug_info_offset                                 :  8, // [14:7]
                      common_user_info_offset                                 :  7; // [6:0]
             uint32_t location_offset                                         :  8, // [31:24]
                      pkt_end_part1_offset                                    :  8, // [23:16]
                      generated_cbf_details_offset                            :  8, // [15:8]
                      data_done_offset                                        :  8; // [7:0]
             uint32_t reserved_7a                                             :  8, // [31:24]
                      abort_request_ack_offset                                :  8, // [23:16]
                      pkt_end_offset                                          :  8, // [15:8]
                      az_integrity_data_offset                                :  8; // [7:0]
             uint32_t reserved_8a                                             : 32; // [31:0]
             uint32_t reserved_9a                                             : 32; // [31:0]
#endif
};


/* Description		RSSI_LEGACY_OFFSET

			Offset in units of 4 bytes of 'PHYRX_RSSI_LEGACY' within
			 'RX_PPDU_END'<legal 1, 2>
*/

#define RXPCU_PPDU_END_LAYOUT_INFO_RSSI_LEGACY_OFFSET_OFFSET                        0x00000000
#define RXPCU_PPDU_END_LAYOUT_INFO_RSSI_LEGACY_OFFSET_LSB                           0
#define RXPCU_PPDU_END_LAYOUT_INFO_RSSI_LEGACY_OFFSET_MSB                           1
#define RXPCU_PPDU_END_LAYOUT_INFO_RSSI_LEGACY_OFFSET_MASK                          0x00000003


/* Description		L_SIG_A_OFFSET

			Offset in units of 4 bytes of 'PHYRX_L_SIG_A' within 'RX_PPDU_END' 
			Set to zero if the TLV is not included<legal 0, 44, 46>
*/

#define RXPCU_PPDU_END_LAYOUT_INFO_L_SIG_A_OFFSET_OFFSET                            0x00000000
#define RXPCU_PPDU_END_LAYOUT_INFO_L_SIG_A_OFFSET_LSB                               2
#define RXPCU_PPDU_END_LAYOUT_INFO_L_SIG_A_OFFSET_MSB                               7
#define RXPCU_PPDU_END_LAYOUT_INFO_L_SIG_A_OFFSET_MASK                              0x000000fc


/* Description		L_SIG_B_OFFSET

			Offset in units of 4 bytes of 'PHYRX_L_SIG_A' within 'RX_PPDU_END' 
			Set to zero if the TLV is not included<legal 0, 44, 46>
*/

#define RXPCU_PPDU_END_LAYOUT_INFO_L_SIG_B_OFFSET_OFFSET                            0x00000000
#define RXPCU_PPDU_END_LAYOUT_INFO_L_SIG_B_OFFSET_LSB                               8
#define RXPCU_PPDU_END_LAYOUT_INFO_L_SIG_B_OFFSET_MSB                               13
#define RXPCU_PPDU_END_LAYOUT_INFO_L_SIG_B_OFFSET_MASK                              0x00003f00


/* Description		HT_SIG_OFFSET

			Offset of 'PHYRX_HT_SIG' within 'RX_PPDU_END' Set to zero
			 if the TLV is not included<legal 0, 46, 50>
*/

#define RXPCU_PPDU_END_LAYOUT_INFO_HT_SIG_OFFSET_OFFSET                             0x00000000
#define RXPCU_PPDU_END_LAYOUT_INFO_HT_SIG_OFFSET_LSB                                14
#define RXPCU_PPDU_END_LAYOUT_INFO_HT_SIG_OFFSET_MSB                                19
#define RXPCU_PPDU_END_LAYOUT_INFO_HT_SIG_OFFSET_MASK                               0x000fc000


/* Description		VHT_SIG_A_OFFSET

			Offset in units of 4 bytes of 'PHYRX_VHT_SIG_A' within 'RX_PPDU_END' 
			Set to zero if the TLV is not included<legal 0, 46, 50>
*/

#define RXPCU_PPDU_END_LAYOUT_INFO_VHT_SIG_A_OFFSET_OFFSET                          0x00000000
#define RXPCU_PPDU_END_LAYOUT_INFO_VHT_SIG_A_OFFSET_LSB                             20
#define RXPCU_PPDU_END_LAYOUT_INFO_VHT_SIG_A_OFFSET_MSB                             25
#define RXPCU_PPDU_END_LAYOUT_INFO_VHT_SIG_A_OFFSET_MASK                            0x03f00000


/* Description		REPEAT_L_SIG_A_OFFSET

			Offset in units of 4 bytes of the repeat 'PHYRX_L_SIG_A' (in
			 HE and EHT cases) within 'RX_PPDU_END'
			 
			Set to zero if the TLV is not included
			<legal 0, 46, 50>
*/

#define RXPCU_PPDU_END_LAYOUT_INFO_REPEAT_L_SIG_A_OFFSET_OFFSET                     0x00000000
#define RXPCU_PPDU_END_LAYOUT_INFO_REPEAT_L_SIG_A_OFFSET_LSB                        26
#define RXPCU_PPDU_END_LAYOUT_INFO_REPEAT_L_SIG_A_OFFSET_MSB                        31
#define RXPCU_PPDU_END_LAYOUT_INFO_REPEAT_L_SIG_A_OFFSET_MASK                       0xfc000000


/* Description		HE_SIG_A_SU_OFFSET

			Offset in units of 4 bytes of 'PHYRX_HE_SIG_A_SU' within
			 'RX_PPDU_END' Set to zero if the TLV is not included<legal
			 0, 48, 54>
*/

#define RXPCU_PPDU_END_LAYOUT_INFO_HE_SIG_A_SU_OFFSET_OFFSET                        0x00000004
#define RXPCU_PPDU_END_LAYOUT_INFO_HE_SIG_A_SU_OFFSET_LSB                           0
#define RXPCU_PPDU_END_LAYOUT_INFO_HE_SIG_A_SU_OFFSET_MSB                           5
#define RXPCU_PPDU_END_LAYOUT_INFO_HE_SIG_A_SU_OFFSET_MASK                          0x0000003f


/* Description		HE_SIG_A_MU_DL_OFFSET

			Offset in units of 4 bytes of 'PHYRX_HE_SIG_A_MU_DL' within
			 'RX_PPDU_END' Set to zero if the TLV is not included<legal
			 0, 48, 54>
*/

#define RXPCU_PPDU_END_LAYOUT_INFO_HE_SIG_A_MU_DL_OFFSET_OFFSET                     0x00000004
#define RXPCU_PPDU_END_LAYOUT_INFO_HE_SIG_A_MU_DL_OFFSET_LSB                        6
#define RXPCU_PPDU_END_LAYOUT_INFO_HE_SIG_A_MU_DL_OFFSET_MSB                        11
#define RXPCU_PPDU_END_LAYOUT_INFO_HE_SIG_A_MU_DL_OFFSET_MASK                       0x00000fc0


/* Description		HE_SIG_A_MU_UL_OFFSET

			Offset in units of 4 bytes of 'PHYRX_HE_SIG_A_MU_UL' within
			 'RX_PPDU_END' Set to zero if the TLV is not included<legal
			 0, 48, 54>
*/

#define RXPCU_PPDU_END_LAYOUT_INFO_HE_SIG_A_MU_UL_OFFSET_OFFSET                     0x00000004
#define RXPCU_PPDU_END_LAYOUT_INFO_HE_SIG_A_MU_UL_OFFSET_LSB                        12
#define RXPCU_PPDU_END_LAYOUT_INFO_HE_SIG_A_MU_UL_OFFSET_MSB                        17
#define RXPCU_PPDU_END_LAYOUT_INFO_HE_SIG_A_MU_UL_OFFSET_MASK                       0x0003f000


/* Description		GENERIC_U_SIG_OFFSET

			Offset in units of 4 bytes of 'PHYRX_GENERIC_U_SIG' within
			 'RX_PPDU_END' Set to zero if the TLV is not included<legal
			 0, 48, 54>
*/

#define RXPCU_PPDU_END_LAYOUT_INFO_GENERIC_U_SIG_OFFSET_OFFSET                      0x00000004
#define RXPCU_PPDU_END_LAYOUT_INFO_GENERIC_U_SIG_OFFSET_LSB                         18
#define RXPCU_PPDU_END_LAYOUT_INFO_GENERIC_U_SIG_OFFSET_MSB                         23
#define RXPCU_PPDU_END_LAYOUT_INFO_GENERIC_U_SIG_OFFSET_MASK                        0x00fc0000


/* Description		RSSI_HT_OFFSET

			Offset in units of 4 bytes of 'PHYRX_RSSI_HT' within 'RX_PPDU_END' 
			Set to zero if the TLV is not included<legal 0, 49-127>
*/

#define RXPCU_PPDU_END_LAYOUT_INFO_RSSI_HT_OFFSET_OFFSET                            0x00000004
#define RXPCU_PPDU_END_LAYOUT_INFO_RSSI_HT_OFFSET_LSB                               24
#define RXPCU_PPDU_END_LAYOUT_INFO_RSSI_HT_OFFSET_MSB                               30
#define RXPCU_PPDU_END_LAYOUT_INFO_RSSI_HT_OFFSET_MASK                              0x7f000000


/* Description		RESERVED_1A

			<legal 0>
*/

#define RXPCU_PPDU_END_LAYOUT_INFO_RESERVED_1A_OFFSET                               0x00000004
#define RXPCU_PPDU_END_LAYOUT_INFO_RESERVED_1A_LSB                                  31
#define RXPCU_PPDU_END_LAYOUT_INFO_RESERVED_1A_MSB                                  31
#define RXPCU_PPDU_END_LAYOUT_INFO_RESERVED_1A_MASK                                 0x80000000


/* Description		VHT_SIG_B_SU20_OFFSET

			Offset in units of 4 bytes of 'PHYRX_VHT_SIG_B_SU20' within
			 'RX_PPDU_END' Set to zero if the TLV is not included<legal
			 0, 67, 74>
*/

#define RXPCU_PPDU_END_LAYOUT_INFO_VHT_SIG_B_SU20_OFFSET_OFFSET                     0x00000008
#define RXPCU_PPDU_END_LAYOUT_INFO_VHT_SIG_B_SU20_OFFSET_LSB                        0
#define RXPCU_PPDU_END_LAYOUT_INFO_VHT_SIG_B_SU20_OFFSET_MSB                        6
#define RXPCU_PPDU_END_LAYOUT_INFO_VHT_SIG_B_SU20_OFFSET_MASK                       0x0000007f


/* Description		VHT_SIG_B_SU40_OFFSET

			Offset in units of 4 bytes of 'PHYRX_VHT_SIG_B_SU40' within
			 'RX_PPDU_END' Set to zero if the TLV is not included<legal
			 0, 67, 74>
*/

#define RXPCU_PPDU_END_LAYOUT_INFO_VHT_SIG_B_SU40_OFFSET_OFFSET                     0x00000008
#define RXPCU_PPDU_END_LAYOUT_INFO_VHT_SIG_B_SU40_OFFSET_LSB                        7
#define RXPCU_PPDU_END_LAYOUT_INFO_VHT_SIG_B_SU40_OFFSET_MSB                        13
#define RXPCU_PPDU_END_LAYOUT_INFO_VHT_SIG_B_SU40_OFFSET_MASK                       0x00003f80


/* Description		VHT_SIG_B_SU80_OFFSET

			Offset in units of 4 bytes of 'PHYRX_VHT_SIG_B_SU80' within
			 'RX_PPDU_END' Set to zero if the TLV is not included<legal
			 0, 67, 74>
*/

#define RXPCU_PPDU_END_LAYOUT_INFO_VHT_SIG_B_SU80_OFFSET_OFFSET                     0x00000008
#define RXPCU_PPDU_END_LAYOUT_INFO_VHT_SIG_B_SU80_OFFSET_LSB                        14
#define RXPCU_PPDU_END_LAYOUT_INFO_VHT_SIG_B_SU80_OFFSET_MSB                        20
#define RXPCU_PPDU_END_LAYOUT_INFO_VHT_SIG_B_SU80_OFFSET_MASK                       0x001fc000


/* Description		VHT_SIG_B_SU160_OFFSET

			Offset in units of 4 bytes of 'PHYRX_VHT_SIG_B_SU160' within
			 'RX_PPDU_END' Set to zero if the TLV is not included<legal
			 0, 67, 74>
*/

#define RXPCU_PPDU_END_LAYOUT_INFO_VHT_SIG_B_SU160_OFFSET_OFFSET                    0x00000008
#define RXPCU_PPDU_END_LAYOUT_INFO_VHT_SIG_B_SU160_OFFSET_LSB                       21
#define RXPCU_PPDU_END_LAYOUT_INFO_VHT_SIG_B_SU160_OFFSET_MSB                       27
#define RXPCU_PPDU_END_LAYOUT_INFO_VHT_SIG_B_SU160_OFFSET_MASK                      0x0fe00000


/* Description		RESERVED_2A

			<legal 0>
*/

#define RXPCU_PPDU_END_LAYOUT_INFO_RESERVED_2A_OFFSET                               0x00000008
#define RXPCU_PPDU_END_LAYOUT_INFO_RESERVED_2A_LSB                                  28
#define RXPCU_PPDU_END_LAYOUT_INFO_RESERVED_2A_MSB                                  31
#define RXPCU_PPDU_END_LAYOUT_INFO_RESERVED_2A_MASK                                 0xf0000000


/* Description		VHT_SIG_B_MU20_OFFSET

			Offset in units of 4 bytes of 'PHYRX_VHT_SIG_B_MU20' within
			 'RX_PPDU_END' Set to zero if the TLV is not included<legal
			 0, 67, 74>
*/

#define RXPCU_PPDU_END_LAYOUT_INFO_VHT_SIG_B_MU20_OFFSET_OFFSET                     0x0000000c
#define RXPCU_PPDU_END_LAYOUT_INFO_VHT_SIG_B_MU20_OFFSET_LSB                        0
#define RXPCU_PPDU_END_LAYOUT_INFO_VHT_SIG_B_MU20_OFFSET_MSB                        6
#define RXPCU_PPDU_END_LAYOUT_INFO_VHT_SIG_B_MU20_OFFSET_MASK                       0x0000007f


/* Description		VHT_SIG_B_MU40_OFFSET

			Offset in units of 4 bytes of 'PHYRX_VHT_SIG_B_MU40' within
			 'RX_PPDU_END' Set to zero if the TLV is not included<legal
			 0, 67, 74>
*/

#define RXPCU_PPDU_END_LAYOUT_INFO_VHT_SIG_B_MU40_OFFSET_OFFSET                     0x0000000c
#define RXPCU_PPDU_END_LAYOUT_INFO_VHT_SIG_B_MU40_OFFSET_LSB                        7
#define RXPCU_PPDU_END_LAYOUT_INFO_VHT_SIG_B_MU40_OFFSET_MSB                        13
#define RXPCU_PPDU_END_LAYOUT_INFO_VHT_SIG_B_MU40_OFFSET_MASK                       0x00003f80


/* Description		VHT_SIG_B_MU80_OFFSET

			Offset in units of 4 bytes of 'PHYRX_VHT_SIG_B_MU80' within
			 'RX_PPDU_END' Set to zero if the TLV is not included<legal
			 0, 67, 74>
*/

#define RXPCU_PPDU_END_LAYOUT_INFO_VHT_SIG_B_MU80_OFFSET_OFFSET                     0x0000000c
#define RXPCU_PPDU_END_LAYOUT_INFO_VHT_SIG_B_MU80_OFFSET_LSB                        14
#define RXPCU_PPDU_END_LAYOUT_INFO_VHT_SIG_B_MU80_OFFSET_MSB                        20
#define RXPCU_PPDU_END_LAYOUT_INFO_VHT_SIG_B_MU80_OFFSET_MASK                       0x001fc000


/* Description		VHT_SIG_B_MU160_OFFSET

			Offset in units of 4 bytes of 'PHYRX_VHT_SIG_B_MU160' within
			 'RX_PPDU_END' Set to zero if the TLV is not included<legal
			 0, 67, 74>
*/

#define RXPCU_PPDU_END_LAYOUT_INFO_VHT_SIG_B_MU160_OFFSET_OFFSET                    0x0000000c
#define RXPCU_PPDU_END_LAYOUT_INFO_VHT_SIG_B_MU160_OFFSET_LSB                       21
#define RXPCU_PPDU_END_LAYOUT_INFO_VHT_SIG_B_MU160_OFFSET_MSB                       27
#define RXPCU_PPDU_END_LAYOUT_INFO_VHT_SIG_B_MU160_OFFSET_MASK                      0x0fe00000


/* Description		RESERVED_3A

			<legal 0>
*/

#define RXPCU_PPDU_END_LAYOUT_INFO_RESERVED_3A_OFFSET                               0x0000000c
#define RXPCU_PPDU_END_LAYOUT_INFO_RESERVED_3A_LSB                                  28
#define RXPCU_PPDU_END_LAYOUT_INFO_RESERVED_3A_MSB                                  31
#define RXPCU_PPDU_END_LAYOUT_INFO_RESERVED_3A_MASK                                 0xf0000000


/* Description		HE_SIG_B1_MU_OFFSET

			Offset in units of 4 bytes of 'PHYRX_HE_SIG_B1_MU' within
			 'RX_PPDU_END' Set to zero if the TLV is not included<legal
			 0, 51, 58>
*/

#define RXPCU_PPDU_END_LAYOUT_INFO_HE_SIG_B1_MU_OFFSET_OFFSET                       0x00000010
#define RXPCU_PPDU_END_LAYOUT_INFO_HE_SIG_B1_MU_OFFSET_LSB                          0
#define RXPCU_PPDU_END_LAYOUT_INFO_HE_SIG_B1_MU_OFFSET_MSB                          6
#define RXPCU_PPDU_END_LAYOUT_INFO_HE_SIG_B1_MU_OFFSET_MASK                         0x0000007f


/* Description		HE_SIG_B2_MU_OFFSET

			Offset in units of 4 bytes of 'PHYRX_HE_SIG_B2_MU' within
			 'RX_PPDU_END' Set to zero if the TLV is not included<legal
			 0, 51, 58>
*/

#define RXPCU_PPDU_END_LAYOUT_INFO_HE_SIG_B2_MU_OFFSET_OFFSET                       0x00000010
#define RXPCU_PPDU_END_LAYOUT_INFO_HE_SIG_B2_MU_OFFSET_LSB                          7
#define RXPCU_PPDU_END_LAYOUT_INFO_HE_SIG_B2_MU_OFFSET_MSB                          13
#define RXPCU_PPDU_END_LAYOUT_INFO_HE_SIG_B2_MU_OFFSET_MASK                         0x00003f80


/* Description		HE_SIG_B2_OFDMA_OFFSET

			Offset in units of 4 bytes of 'PHYRX_HE_SIG_B2_OFDMA' within
			 'RX_PPDU_END' Set to zero if the TLV is not included<legal
			 0, 53, 62>
*/

#define RXPCU_PPDU_END_LAYOUT_INFO_HE_SIG_B2_OFDMA_OFFSET_OFFSET                    0x00000010
#define RXPCU_PPDU_END_LAYOUT_INFO_HE_SIG_B2_OFDMA_OFFSET_LSB                       14
#define RXPCU_PPDU_END_LAYOUT_INFO_HE_SIG_B2_OFDMA_OFFSET_MSB                       20
#define RXPCU_PPDU_END_LAYOUT_INFO_HE_SIG_B2_OFDMA_OFFSET_MASK                      0x001fc000


/* Description		FIRST_GENERIC_EHT_SIG_OFFSET

			Offset in units of 4 bytes of the first 'PHYRX_GENERIC_EHT_SIG' 
			within 'RX_PPDU_END' Set to zero if the TLV is not included<legal
			 0, 51, 58>
*/

#define RXPCU_PPDU_END_LAYOUT_INFO_FIRST_GENERIC_EHT_SIG_OFFSET_OFFSET              0x00000010
#define RXPCU_PPDU_END_LAYOUT_INFO_FIRST_GENERIC_EHT_SIG_OFFSET_LSB                 21
#define RXPCU_PPDU_END_LAYOUT_INFO_FIRST_GENERIC_EHT_SIG_OFFSET_MSB                 27
#define RXPCU_PPDU_END_LAYOUT_INFO_FIRST_GENERIC_EHT_SIG_OFFSET_MASK                0x0fe00000


/* Description		MULTIPLE_GENERIC_EHT_SIG_INCLUDED

			Set to one if more than one 'PHYRX_GENERIC_EHT_SIG' TLVs
			 are included in 'RX_PPDU_END,' set to zero otherwise
			<legal all>
*/

#define RXPCU_PPDU_END_LAYOUT_INFO_MULTIPLE_GENERIC_EHT_SIG_INCLUDED_OFFSET         0x00000010
#define RXPCU_PPDU_END_LAYOUT_INFO_MULTIPLE_GENERIC_EHT_SIG_INCLUDED_LSB            28
#define RXPCU_PPDU_END_LAYOUT_INFO_MULTIPLE_GENERIC_EHT_SIG_INCLUDED_MSB            28
#define RXPCU_PPDU_END_LAYOUT_INFO_MULTIPLE_GENERIC_EHT_SIG_INCLUDED_MASK           0x10000000


/* Description		RESERVED_4A

			<legal 0>
*/

#define RXPCU_PPDU_END_LAYOUT_INFO_RESERVED_4A_OFFSET                               0x00000010
#define RXPCU_PPDU_END_LAYOUT_INFO_RESERVED_4A_LSB                                  29
#define RXPCU_PPDU_END_LAYOUT_INFO_RESERVED_4A_MSB                                  31
#define RXPCU_PPDU_END_LAYOUT_INFO_RESERVED_4A_MASK                                 0xe0000000


/* Description		COMMON_USER_INFO_OFFSET

			Offset in units of 4 bytes of 'PHYRX_COMMON_USER_INFO' within
			 'RX_PPDU_END' Set to zero if the TLV is not included<legal
			 0, 46, 50, 67, 70-127>
*/

#define RXPCU_PPDU_END_LAYOUT_INFO_COMMON_USER_INFO_OFFSET_OFFSET                   0x00000014
#define RXPCU_PPDU_END_LAYOUT_INFO_COMMON_USER_INFO_OFFSET_LSB                      0
#define RXPCU_PPDU_END_LAYOUT_INFO_COMMON_USER_INFO_OFFSET_MSB                      6
#define RXPCU_PPDU_END_LAYOUT_INFO_COMMON_USER_INFO_OFFSET_MASK                     0x0000007f


/* Description		FIRST_DEBUG_INFO_OFFSET

			Offset in units of 4 bytes of the first 'PHYRX_DEBUG_INFO' 
			within 'RX_PPDU_END' Set to zero if the TLV is not included<legal
			 all>
*/

#define RXPCU_PPDU_END_LAYOUT_INFO_FIRST_DEBUG_INFO_OFFSET_OFFSET                   0x00000014
#define RXPCU_PPDU_END_LAYOUT_INFO_FIRST_DEBUG_INFO_OFFSET_LSB                      7
#define RXPCU_PPDU_END_LAYOUT_INFO_FIRST_DEBUG_INFO_OFFSET_MSB                      14
#define RXPCU_PPDU_END_LAYOUT_INFO_FIRST_DEBUG_INFO_OFFSET_MASK                     0x00007f80


/* Description		MULTIPLE_DEBUG_INFO_INCLUDED

			Set to one if more than one 'PHYRX_DEBUG_INFO' TLVs are 
			included in 'RX_PPDU_END,' set to zero otherwise<legal all>
			
*/

#define RXPCU_PPDU_END_LAYOUT_INFO_MULTIPLE_DEBUG_INFO_INCLUDED_OFFSET              0x00000014
#define RXPCU_PPDU_END_LAYOUT_INFO_MULTIPLE_DEBUG_INFO_INCLUDED_LSB                 15
#define RXPCU_PPDU_END_LAYOUT_INFO_MULTIPLE_DEBUG_INFO_INCLUDED_MSB                 15
#define RXPCU_PPDU_END_LAYOUT_INFO_MULTIPLE_DEBUG_INFO_INCLUDED_MASK                0x00008000


/* Description		FIRST_OTHER_RECEIVE_INFO_OFFSET

			Offset in units of 4 bytes of the first 'PHYRX_OTHER_RECEIVE_INFO' 
			within 'RX_PPDU_END' Set to zero if the TLV is not included<legal
			 all>
*/

#define RXPCU_PPDU_END_LAYOUT_INFO_FIRST_OTHER_RECEIVE_INFO_OFFSET_OFFSET           0x00000014
#define RXPCU_PPDU_END_LAYOUT_INFO_FIRST_OTHER_RECEIVE_INFO_OFFSET_LSB              16
#define RXPCU_PPDU_END_LAYOUT_INFO_FIRST_OTHER_RECEIVE_INFO_OFFSET_MSB              23
#define RXPCU_PPDU_END_LAYOUT_INFO_FIRST_OTHER_RECEIVE_INFO_OFFSET_MASK             0x00ff0000


/* Description		MULTIPLE_OTHER_RECEIVE_INFO_INCLUDED

			Set to one if more than one 'PHYRX_OTHER_RECEIVE_INFO' TLVs
			 are included in 'RX_PPDU_END,' set to zero otherwise<legal
			 all>
*/

#define RXPCU_PPDU_END_LAYOUT_INFO_MULTIPLE_OTHER_RECEIVE_INFO_INCLUDED_OFFSET      0x00000014
#define RXPCU_PPDU_END_LAYOUT_INFO_MULTIPLE_OTHER_RECEIVE_INFO_INCLUDED_LSB         24
#define RXPCU_PPDU_END_LAYOUT_INFO_MULTIPLE_OTHER_RECEIVE_INFO_INCLUDED_MSB         24
#define RXPCU_PPDU_END_LAYOUT_INFO_MULTIPLE_OTHER_RECEIVE_INFO_INCLUDED_MASK        0x01000000


/* Description		RESERVED_5A

			<legal 0>
*/

#define RXPCU_PPDU_END_LAYOUT_INFO_RESERVED_5A_OFFSET                               0x00000014
#define RXPCU_PPDU_END_LAYOUT_INFO_RESERVED_5A_LSB                                  25
#define RXPCU_PPDU_END_LAYOUT_INFO_RESERVED_5A_MSB                                  31
#define RXPCU_PPDU_END_LAYOUT_INFO_RESERVED_5A_MASK                                 0xfe000000


/* Description		DATA_DONE_OFFSET

			Offset in units of 4 bytes of 'PHYRX_DATA_DONE' within 'RX_PPDU_END' 
			Set to zero if the TLV is not included<legal all>
*/

#define RXPCU_PPDU_END_LAYOUT_INFO_DATA_DONE_OFFSET_OFFSET                          0x00000018
#define RXPCU_PPDU_END_LAYOUT_INFO_DATA_DONE_OFFSET_LSB                             0
#define RXPCU_PPDU_END_LAYOUT_INFO_DATA_DONE_OFFSET_MSB                             7
#define RXPCU_PPDU_END_LAYOUT_INFO_DATA_DONE_OFFSET_MASK                            0x000000ff


/* Description		GENERATED_CBF_DETAILS_OFFSET

			Offset in units of 4 bytes of 'PHYRX_GENERATED_CBF_DETAILS' 
			within 'RX_PPDU_END'Set to zero if the TLV is not included<legal
			 0, 70-127>
*/

#define RXPCU_PPDU_END_LAYOUT_INFO_GENERATED_CBF_DETAILS_OFFSET_OFFSET              0x00000018
#define RXPCU_PPDU_END_LAYOUT_INFO_GENERATED_CBF_DETAILS_OFFSET_LSB                 8
#define RXPCU_PPDU_END_LAYOUT_INFO_GENERATED_CBF_DETAILS_OFFSET_MSB                 15
#define RXPCU_PPDU_END_LAYOUT_INFO_GENERATED_CBF_DETAILS_OFFSET_MASK                0x0000ff00


/* Description		PKT_END_PART1_OFFSET

			Offset in units of 4 bytes of 'PHYRX_PKT_END_PART1' within
			 'RX_PPDU_END' Set to zero if the TLV is not included<legal
			 all>
*/

#define RXPCU_PPDU_END_LAYOUT_INFO_PKT_END_PART1_OFFSET_OFFSET                      0x00000018
#define RXPCU_PPDU_END_LAYOUT_INFO_PKT_END_PART1_OFFSET_LSB                         16
#define RXPCU_PPDU_END_LAYOUT_INFO_PKT_END_PART1_OFFSET_MSB                         23
#define RXPCU_PPDU_END_LAYOUT_INFO_PKT_END_PART1_OFFSET_MASK                        0x00ff0000


/* Description		LOCATION_OFFSET

			Offset in units of 4 bytes of 'PHYRX_LOCATION' within 'RX_PPDU_END' 
			Set to zero if the TLV is not included<legal all>
*/

#define RXPCU_PPDU_END_LAYOUT_INFO_LOCATION_OFFSET_OFFSET                           0x00000018
#define RXPCU_PPDU_END_LAYOUT_INFO_LOCATION_OFFSET_LSB                              24
#define RXPCU_PPDU_END_LAYOUT_INFO_LOCATION_OFFSET_MSB                              31
#define RXPCU_PPDU_END_LAYOUT_INFO_LOCATION_OFFSET_MASK                             0xff000000


/* Description		AZ_INTEGRITY_DATA_OFFSET

			Offset in units of 4 bytes of 'PHYRX_11AZ_INTEGRITY_DATA' 
			within 'RX_PPDU_END'
			 
			Set to zero if the TLV is not included
			<legal all>
*/

#define RXPCU_PPDU_END_LAYOUT_INFO_AZ_INTEGRITY_DATA_OFFSET_OFFSET                  0x0000001c
#define RXPCU_PPDU_END_LAYOUT_INFO_AZ_INTEGRITY_DATA_OFFSET_LSB                     0
#define RXPCU_PPDU_END_LAYOUT_INFO_AZ_INTEGRITY_DATA_OFFSET_MSB                     7
#define RXPCU_PPDU_END_LAYOUT_INFO_AZ_INTEGRITY_DATA_OFFSET_MASK                    0x000000ff


/* Description		PKT_END_OFFSET

			Offset in units of 4 bytes of 'PHYRX_PKT_END' within 'RX_PPDU_END' 
			Set to zero if the TLV is not included<legal all>
*/

#define RXPCU_PPDU_END_LAYOUT_INFO_PKT_END_OFFSET_OFFSET                            0x0000001c
#define RXPCU_PPDU_END_LAYOUT_INFO_PKT_END_OFFSET_LSB                               8
#define RXPCU_PPDU_END_LAYOUT_INFO_PKT_END_OFFSET_MSB                               15
#define RXPCU_PPDU_END_LAYOUT_INFO_PKT_END_OFFSET_MASK                              0x0000ff00


/* Description		ABORT_REQUEST_ACK_OFFSET

			Offset in units of 4 bytes of either 'PHYRX_ABORT_REQUEST' 
			or 'PHYRX_ABORT_ACK' within 'RX_PPDU_END'
			
			Set to zero if the TLV is not included
			<legal all>
*/

#define RXPCU_PPDU_END_LAYOUT_INFO_ABORT_REQUEST_ACK_OFFSET_OFFSET                  0x0000001c
#define RXPCU_PPDU_END_LAYOUT_INFO_ABORT_REQUEST_ACK_OFFSET_LSB                     16
#define RXPCU_PPDU_END_LAYOUT_INFO_ABORT_REQUEST_ACK_OFFSET_MSB                     23
#define RXPCU_PPDU_END_LAYOUT_INFO_ABORT_REQUEST_ACK_OFFSET_MASK                    0x00ff0000


/* Description		RESERVED_7A

			Spare space in case the widths of the above offsets grow<legal
			 all>
*/

#define RXPCU_PPDU_END_LAYOUT_INFO_RESERVED_7A_OFFSET                               0x0000001c
#define RXPCU_PPDU_END_LAYOUT_INFO_RESERVED_7A_LSB                                  24
#define RXPCU_PPDU_END_LAYOUT_INFO_RESERVED_7A_MSB                                  31
#define RXPCU_PPDU_END_LAYOUT_INFO_RESERVED_7A_MASK                                 0xff000000


/* Description		RESERVED_8A

			Spare space in case the widths of the above offsets grow
			
			<legal all>
*/

#define RXPCU_PPDU_END_LAYOUT_INFO_RESERVED_8A_OFFSET                               0x00000020
#define RXPCU_PPDU_END_LAYOUT_INFO_RESERVED_8A_LSB                                  0
#define RXPCU_PPDU_END_LAYOUT_INFO_RESERVED_8A_MSB                                  31
#define RXPCU_PPDU_END_LAYOUT_INFO_RESERVED_8A_MASK                                 0xffffffff


/* Description		RESERVED_9A

			Spare space in case the widths of the above offsets grow
			
			<legal all>
*/

#define RXPCU_PPDU_END_LAYOUT_INFO_RESERVED_9A_OFFSET                               0x00000024
#define RXPCU_PPDU_END_LAYOUT_INFO_RESERVED_9A_LSB                                  0
#define RXPCU_PPDU_END_LAYOUT_INFO_RESERVED_9A_MSB                                  31
#define RXPCU_PPDU_END_LAYOUT_INFO_RESERVED_9A_MASK                                 0xffffffff



#endif   // RXPCU_PPDU_END_LAYOUT_INFO
