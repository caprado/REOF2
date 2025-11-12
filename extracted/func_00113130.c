void func_00113130() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00113130: addiu $sp, $sp, -0x10
    if (a0 != 0) goto label_0x1133c4;                           // 0x00113138: bnez $a0, 0x1133c4
    v0 = 0x1000 << 16;                                          // 0x00113140: lui $v0, 0x1000
    v0 = v0 | 0x9000;                                           // 0x00113144: ori $v0, $v0, 0x9000
    v1 = g_10000000;  // Global at 0x10000000                   // 0x00113148: lw $v1, 0($v0)
    v1 = v1 & 0x100;                                            // 0x0011314c: andi $v1, $v1, 0x100
    if (v1 == 0) goto label_0x113184;                           // 0x00113150: beqz $v1, 0x113184
    v1 = 0x1000 << 16;                                          // 0x00113154: lui $v1, 0x1000
    a0 = 0x100 << 16;                                           // 0x00113158: lui $a0, 0x100
    v1 = v1 | 0x9000;                                           // 0x0011315c: ori $v1, $v1, 0x9000
    /* nop */                                                   // 0x00113164: nop 
label_0x113168:
    v0 = ((unsigned)a0 < (unsigned)v0) ? 1 : 0;                 // 0x00113168: sltu $v0, $a0, $v0
    if (v0 != 0) goto label_0x11328c;                           // 0x0011316c: bnez $v0, 0x11328c
    a1 = a1 + 1;                                                // 0x00113170: addiu $a1, $a1, 1
    v0 = g_10000000;  // Global at 0x10000000                   // 0x00113174: lw $v0, 0($v1)
    v0 = v0 & 0x100;                                            // 0x00113178: andi $v0, $v0, 0x100
    if (v0 != 0) goto label_0x113168;                           // 0x0011317c: bnez $v0, 0x113168
label_0x113184:
    v0 = 0x1000 << 16;                                          // 0x00113184: lui $v0, 0x1000
    v0 = v0 | 0xa000;                                           // 0x00113188: ori $v0, $v0, 0xa000
    v1 = g_10000000;  // Global at 0x10000000                   // 0x0011318c: lw $v1, 0($v0)
    v1 = v1 & 0x100;                                            // 0x00113190: andi $v1, $v1, 0x100
    if (v1 == 0) goto label_0x1131c4;                           // 0x00113194: beqz $v1, 0x1131c4
    v1 = 0x1000 << 16;                                          // 0x00113198: lui $v1, 0x1000
    a0 = 0x100 << 16;                                           // 0x0011319c: lui $a0, 0x100
    v1 = v1 | 0xa000;                                           // 0x001131a0: ori $v1, $v1, 0xa000
label_0x1131a8:
    v0 = ((unsigned)a0 < (unsigned)v0) ? 1 : 0;                 // 0x001131a8: sltu $v0, $a0, $v0
    if (v0 != 0) goto label_0x113298;                           // 0x001131ac: bnez $v0, 0x113298
    a1 = a1 + 1;                                                // 0x001131b0: addiu $a1, $a1, 1
    v0 = g_10000000;  // Global at 0x10000000                   // 0x001131b4: lw $v0, 0($v1)
    v0 = v0 & 0x100;                                            // 0x001131b8: andi $v0, $v0, 0x100
    if (v0 != 0) goto label_0x1131a8;                           // 0x001131bc: bnez $v0, 0x1131a8
label_0x1131c4:
    v0 = 0x1000 << 16;                                          // 0x001131c4: lui $v0, 0x1000
    a0 = 0x1f00 << 16;                                          // 0x001131c8: lui $a0, 0x1f00
    v0 = v0 | 0x3c00;                                           // 0x001131cc: ori $v0, $v0, 0x3c00
    a0 = a0 | 3;                                                // 0x001131d0: ori $a0, $a0, 3
    v1 = g_10000000;  // Global at 0x10000000                   // 0x001131d4: lw $v1, 0($v0)
    v1 = v1 & a0;                                               // 0x001131d8: and $v1, $v1, $a0
    if (v1 == 0) goto label_0x113214;                           // 0x001131dc: beqz $v1, 0x113214
    v1 = 0x1f00 << 16;                                          // 0x001131e0: lui $v1, 0x1f00
    a0 = 0x1000 << 16;                                          // 0x001131e4: lui $a0, 0x1000
    a2 = 0x100 << 16;                                           // 0x001131e8: lui $a2, 0x100
    a0 = a0 | 0x3c00;                                           // 0x001131ec: ori $a0, $a0, 0x3c00
    v1 = v1 | 3;                                                // 0x001131f0: ori $v1, $v1, 3
label_0x1131f8:
    v0 = ((unsigned)a2 < (unsigned)v0) ? 1 : 0;                 // 0x001131f8: sltu $v0, $a2, $v0
    if (v0 != 0) goto label_0x1132a4;                           // 0x001131fc: bnez $v0, 0x1132a4
    a1 = a1 + 1;                                                // 0x00113200: addiu $a1, $a1, 1
    v0 = g_10000000;  // Global at 0x10000000                   // 0x00113204: lw $v0, 0($a0)
    v0 = v0 & v1;                                               // 0x00113208: and $v0, $v0, $v1
    if (v0 != 0) goto label_0x1131f8;                           // 0x0011320c: bnez $v0, 0x1131f8
label_0x113214:
    v0 = a2 & 0x100;                                            // 0x00113218: andi $v0, $a2, 0x100
    if (v0 == 0) goto label_0x113244;                           // 0x0011321c: beqz $v0, 0x113244
    v1 = 0x100 << 16;                                           // 0x00113220: lui $v1, 0x100
label_0x113228:
    v0 = ((unsigned)v1 < (unsigned)v0) ? 1 : 0;                 // 0x00113228: sltu $v0, $v1, $v0
    if (v0 != 0) goto label_0x1132b0;                           // 0x0011322c: bnez $v0, 0x1132b0
    a1 = a1 + 1;                                                // 0x00113230: addiu $a1, $a1, 1
    v0 = a2 & 0x100;                                            // 0x00113238: andi $v0, $a2, 0x100
    if (v0 != 0) goto label_0x113228;                           // 0x0011323c: bnez $v0, 0x113228
label_0x113244:
    v0 = 0x1000 << 16;                                          // 0x00113244: lui $v0, 0x1000
    v0 = v0 | 0x3020;                                           // 0x00113248: ori $v0, $v0, 0x3020
    v1 = g_10000000;  // Global at 0x10000000                   // 0x0011324c: lw $v1, 0($v0)
    v1 = v1 & 0xc00;                                            // 0x00113250: andi $v1, $v1, 0xc00
    if (v1 == 0) goto label_0x113284;                           // 0x00113254: beqz $v1, 0x113284
    v1 = 0x1000 << 16;                                          // 0x00113258: lui $v1, 0x1000
    a0 = 0x100 << 16;                                           // 0x0011325c: lui $a0, 0x100
    v1 = v1 | 0x3020;                                           // 0x00113260: ori $v1, $v1, 0x3020
label_0x113268:
    v0 = ((unsigned)a0 < (unsigned)v0) ? 1 : 0;                 // 0x00113268: sltu $v0, $a0, $v0
    if (v0 != 0) goto label_0x1132bc;                           // 0x0011326c: bnez $v0, 0x1132bc
    a1 = a1 + 1;                                                // 0x00113270: addiu $a1, $a1, 1
    v0 = g_10000000;  // Global at 0x10000000                   // 0x00113274: lw $v0, 0($v1)
    v0 = v0 & 0xc00;                                            // 0x00113278: andi $v0, $v0, 0xc00
    if (v0 != 0) goto label_0x113268;                           // 0x0011327c: bnez $v0, 0x113268
label_0x113284:
    goto label_0x113438;                                        // 0x00113284: b 0x113438
label_0x11328c:
    a0 = 0x22 << 16;                                            // 0x0011328c: lui $a0, 0x22
    goto label_0x1132c4;                                        // 0x00113290: b 0x1132c4
    a0 = &str_00220eb0;  // "\t<D1_CHCR=%08x:"                  // 0x00113294: addiu $a0, $a0, 0xeb0
label_0x113298:
    a0 = 0x22 << 16;                                            // 0x00113298: lui $a0, 0x22
    goto label_0x1132c4;                                        // 0x0011329c: b 0x1132c4
    a0 = &str_00220f90;  // "sceGsSyncPath: VIF1 does not terminate\r\n" // 0x001132a0: addiu $a0, $a0, 0xf90
label_0x1132a4:
    a0 = 0x22 << 16;                                            // 0x001132a4: lui $a0, 0x22
    goto label_0x1132c4;                                        // 0x001132a8: b 0x1132c4
    a0 = &str_00220fc0;  // "sceGsSyncPath: VU1 does not terminate\r\n" // 0x001132ac: addiu $a0, $a0, 0xfc0
label_0x1132b0:
    a0 = 0x22 << 16;                                            // 0x001132b0: lui $a0, 0x22
    goto label_0x1132c4;                                        // 0x001132b4: b 0x1132c4
    a0 = &str_00220ff0;  // "sceGsSyncPath: GIF does not terminate\r\n" // 0x001132b8: addiu $a0, $a0, 0xff0
label_0x1132bc:
    a0 = 0x22 << 16;                                            // 0x001132bc: lui $a0, 0x22
    a0 = &str_00221018;  // "sceGsSetDefLoadImage: too big size\r\n" // 0x001132c0: addiu $a0, $a0, 0x1018
label_0x1132c4:
    func_00116598();  // 0x116508                                // 0x001132c4: jal 0x116508
    /* nop */                                                   // 0x001132c8: nop 
    v0 = 0x1000 << 16;                                          // 0x001132cc: lui $v0, 0x1000
    a0 = 0x22 << 16;                                            // 0x001132d0: lui $a0, 0x22
    v0 = v0 | 0x9000;                                           // 0x001132d4: ori $v0, $v0, 0x9000
    a0 = &str_00220ee0;  // "D1_TADR=%08x:"                     // 0x001132d8: addiu $a0, $a0, 0xee0
    func_00116598();  // 0x116508                                // 0x001132dc: jal 0x116508
    a1 = g_10000000;  // Global at 0x10000000                   // 0x001132e0: lw $a1, 0($v0)
    v0 = 0x1000 << 16;                                          // 0x001132e4: lui $v0, 0x1000
    a0 = 0x22 << 16;                                            // 0x001132e8: lui $a0, 0x22
    v0 = v0 | 0x9030;                                           // 0x001132ec: ori $v0, $v0, 0x9030
    a0 = &str_00220ef0;  // "D1_MADR=%08x:"                     // 0x001132f0: addiu $a0, $a0, 0xef0
    func_00116598();  // 0x116508                                // 0x001132f4: jal 0x116508
    a1 = g_10000000;  // Global at 0x10000000                   // 0x001132f8: lw $a1, 0($v0)
    v0 = 0x1000 << 16;                                          // 0x001132fc: lui $v0, 0x1000
    a0 = 0x22 << 16;                                            // 0x00113300: lui $a0, 0x22
    v0 = v0 | 0x9010;                                           // 0x00113304: ori $v0, $v0, 0x9010
    a0 = &str_00220f00;  // "D1_QWC=%08x>\r\n"                  // 0x00113308: addiu $a0, $a0, 0xf00
    func_00116598();  // 0x116508                                // 0x0011330c: jal 0x116508
    a1 = g_10000000;  // Global at 0x10000000                   // 0x00113310: lw $a1, 0($v0)
    v0 = 0x1000 << 16;                                          // 0x00113314: lui $v0, 0x1000
    a0 = 0x22 << 16;                                            // 0x00113318: lui $a0, 0x22
    v0 = v0 | 0x9020;                                           // 0x0011331c: ori $v0, $v0, 0x9020
    a0 = &str_00220f10;  // "\t<D2_CHCR=%08x:"                  // 0x00113320: addiu $a0, $a0, 0xf10
    func_00116598();  // 0x116508                                // 0x00113324: jal 0x116508
    a1 = g_10000000;  // Global at 0x10000000                   // 0x00113328: lw $a1, 0($v0)
    v0 = 0x1000 << 16;                                          // 0x0011332c: lui $v0, 0x1000
    a0 = 0x22 << 16;                                            // 0x00113330: lui $a0, 0x22
    v0 = v0 | 0xa000;                                           // 0x00113334: ori $v0, $v0, 0xa000
    a0 = &str_00220f20;  // "D2_TADR=%08x:"                     // 0x00113338: addiu $a0, $a0, 0xf20
    func_00116598();  // 0x116508                                // 0x0011333c: jal 0x116508
    a1 = g_10000000;  // Global at 0x10000000                   // 0x00113340: lw $a1, 0($v0)
    v0 = 0x1000 << 16;                                          // 0x00113344: lui $v0, 0x1000
    a0 = 0x22 << 16;                                            // 0x00113348: lui $a0, 0x22
    v0 = v0 | 0xa030;                                           // 0x0011334c: ori $v0, $v0, 0xa030
    a0 = &str_00220f30;  // "D2_MADR=%08x:"                     // 0x00113350: addiu $a0, $a0, 0xf30
    func_00116598();  // 0x116508                                // 0x00113354: jal 0x116508
    a1 = g_10000000;  // Global at 0x10000000                   // 0x00113358: lw $a1, 0($v0)
    v0 = 0x1000 << 16;                                          // 0x0011335c: lui $v0, 0x1000
    a0 = 0x22 << 16;                                            // 0x00113360: lui $a0, 0x22
    v0 = v0 | 0xa010;                                           // 0x00113364: ori $v0, $v0, 0xa010
    a0 = &str_00220f40;  // "D2_QWC=%08x>\r\n"                  // 0x00113368: addiu $a0, $a0, 0xf40
    func_00116598();  // 0x116508                                // 0x0011336c: jal 0x116508
    a1 = g_10000000;  // Global at 0x10000000                   // 0x00113370: lw $a1, 0($v0)
    v0 = 0x1000 << 16;                                          // 0x00113374: lui $v0, 0x1000
    a0 = 0x22 << 16;                                            // 0x00113378: lui $a0, 0x22
    v0 = v0 | 0xa020;                                           // 0x0011337c: ori $v0, $v0, 0xa020
    a0 = &str_00220f50;  // "\t<VIF1_STAT=%08x:"                // 0x00113380: addiu $a0, $a0, 0xf50
    func_00116598();  // 0x116508                                // 0x00113384: jal 0x116508
    a1 = g_10000000;  // Global at 0x10000000                   // 0x00113388: lw $a1, 0($v0)
    v0 = 0x1000 << 16;                                          // 0x0011338c: lui $v0, 0x1000
    a0 = 0x22 << 16;                                            // 0x00113390: lui $a0, 0x22
    v0 = v0 | 0x3c00;                                           // 0x00113394: ori $v0, $v0, 0x3c00
    a0 = &str_00220f60;  // "GIF_STAT=%08x>\r\n"                // 0x00113398: addiu $a0, $a0, 0xf60
    func_00116598();  // 0x116508                                // 0x0011339c: jal 0x116508
    a1 = g_10000000;  // Global at 0x10000000                   // 0x001133a0: lw $a1, 0($v0)
    v0 = 0x1000 << 16;                                          // 0x001133a4: lui $v0, 0x1000
    a0 = 0x22 << 16;                                            // 0x001133a8: lui $a0, 0x22
    v0 = v0 | 0x3020;                                           // 0x001133ac: ori $v0, $v0, 0x3020
    a0 = &str_00220f78;  // "sceGsSyncPath: DMA Ch.2 does not terminate\r\n" // 0x001133b0: addiu $a0, $a0, 0xf78
    func_00116598();  // 0x116508                                // 0x001133b4: jal 0x116508
    a1 = g_10000000;  // Global at 0x10000000                   // 0x001133b8: lw $a1, 0($v0)
    goto label_0x113438;                                        // 0x001133bc: b 0x113438
    v0 = -1;                                                    // 0x001133c0: addiu $v0, $zero, -1
label_0x1133c4:
    v1 = 0x1000 << 16;                                          // 0x001133c4: lui $v1, 0x1000
    a1 = 0x1000 << 16;                                          // 0x001133c8: lui $a1, 0x1000
    v1 = v1 | 0x9000;                                           // 0x001133cc: ori $v1, $v1, 0x9000
    a1 = a1 | 0xa000;                                           // 0x001133d0: ori $a1, $a1, 0xa000
    v0 = g_10000000;  // Global at 0x10000000                   // 0x001133d4: lw $v0, 0($v1)
    a0 = 0x1000 << 16;                                          // 0x001133d8: lui $a0, 0x1000
    a2 = g_10000000;  // Global at 0x10000000                   // 0x001133dc: lw $a2, 0($a1)
    a0 = a0 | 0x3c00;                                           // 0x001133e0: ori $a0, $a0, 0x3c00
    v0 = v0 & 0x100;                                            // 0x001133e4: andi $v0, $v0, 0x100
    a1 = g_10000000;  // Global at 0x10000000                   // 0x001133e8: lw $a1, 0($a0)
    v0 = ((unsigned)0 < (unsigned)v0) ? 1 : 0;                  // 0x001133ec: sltu $v0, $zero, $v0
    a2 = a2 & 0x100;                                            // 0x001133f0: andi $a2, $a2, 0x100
    a0 = v0 | 2;                                                // 0x001133f4: ori $a0, $v0, 2
    v1 = 0x1f00 << 16;                                          // 0x001133f8: lui $v1, 0x1f00
    if (a2 != 0) v0 = a0;                                       // 0x001133fc: movn $v0, $a0, $a2
    v1 = v1 | 3;                                                // 0x00113400: ori $v1, $v1, 3
    a1 = a1 & v1;                                               // 0x00113404: and $a1, $a1, $v1
    a0 = v0 | 4;                                                // 0x00113408: ori $a0, $v0, 4
    if (a1 != 0) v0 = a0;                                       // 0x0011340c: movn $v0, $a0, $a1
    v1 = 0x1000 << 16;                                          // 0x00113414: lui $v1, 0x1000
    a2 = a2 & 0x100;                                            // 0x00113418: andi $a2, $a2, 0x100
    v1 = v1 | 0x3020;                                           // 0x0011341c: ori $v1, $v1, 0x3020
    a1 = v0 | 8;                                                // 0x00113420: ori $a1, $v0, 8
    a0 = g_10000000;  // Global at 0x10000000                   // 0x00113424: lw $a0, 0($v1)
    if (a2 != 0) v0 = a1;                                       // 0x00113428: movn $v0, $a1, $a2
    v1 = v0 | 0x10;                                             // 0x0011342c: ori $v1, $v0, 0x10
    a0 = a0 & 0xc00;                                            // 0x00113430: andi $a0, $a0, 0xc00
    if (a0 != 0) v0 = v1;                                       // 0x00113434: movn $v0, $v1, $a0
label_0x113438:
    return;                                                     // 0x0011343c: jr $ra
    sp = sp + 0x10;                                             // 0x00113440: addiu $sp, $sp, 0x10
}