void func_001010c8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0xb0;                                            // 0x001010c8: addiu $sp, $sp, -0xb0
    a0 = 1;                                                     // 0x001010dc: addiu $a0, $zero, 1
    func_00100e38();  // 100e38                                // 0x001010f8: jal 0x100e38
    if (v0 != 0) goto label_0x101378;                           // 0x00101100: bnez $v0, 0x101378
    func_00116d40();  // 116d40                                // 0x0010110c: jal 0x116d40
    s5 = 0x1f << 16;                                            // 0x00101110: lui $s5, 0x1f
    ReferThreadStatus();  // 0x1141d0                           // 0x00101114: jal 0x1141d0
    s4 = 0x1f << 16;                                            // 0x00101118: lui $s4, 0x1f
    s0 = 0x25 << 16;                                            // 0x0010111c: lui $s0, 0x25
    a1 = g_001edf54;  // Global at 0x001edf54                   // 0x00101120: lw $a1, -0x20ac($s5)
    v1 = 1;                                                     // 0x00101124: addiu $v1, $zero, 1
    a0 = 0x1f << 16;                                            // 0x00101128: lui $a0, 0x1f
    a2 = 0x25 << 16;                                            // 0x0010112c: lui $a2, 0x25
    g_001edf24 = v1;  // Global at 0x001edf24                   // 0x00101130: sw $v1, -0x20dc($a0)
    a1 = a1 + 1;                                                // 0x00101134: addiu $a1, $a1, 1
    a0 = -1;                                                    // 0x00101138: addiu $a0, $zero, -1
    a3 = 0x1f << 16;                                            // 0x0010113c: lui $a3, 0x1f
    t0 = 0x1f << 16;                                            // 0x00101140: lui $t0, 0x1f
    t1 = 0x1f << 16;                                            // 0x00101144: lui $t1, 0x1f
    t3 = 0x1f << 16;                                            // 0x00101148: lui $t3, 0x1f
    v1 = 0x1f << 16;                                            // 0x0010114c: lui $v1, 0x1f
    t2 = 0x1f << 16;                                            // 0x00101150: lui $t2, 0x1f
    g_0024b718 = v0;  // Global at 0x0024b718                   // 0x00101154: sw $v0, -0x48e8($a2)
    v0 = 0x25 << 16;                                            // 0x00101158: lui $v0, 0x25
    g_001edf40 = a0;  // Global at 0x001edf40                   // 0x0010115c: sw $a0, -0x20c0($v1)
    g_001edf44 = a0;  // Global at 0x001edf44                   // 0x00101160: sw $a0, -0x20bc($a3)
    s1 = v0 + -0x46d8;                                          // 0x00101164: addiu $s1, $v0, -0x46d8
    g_001edf3c = a0;  // Global at 0x001edf3c                   // 0x00101168: sw $a0, -0x20c4($t0)
    s2 = s0 + -0x4680;                                          // 0x0010116c: addiu $s2, $s0, -0x4680
    g_001edf4c = a0;  // Global at 0x001edf4c                   // 0x00101170: sw $a0, -0x20b4($t1)
    fp = 0x1f << 16;                                            // 0x00101174: lui $fp, 0x1f
    g_001edf48 = a0;  // Global at 0x001edf48                   // 0x00101178: sw $a0, -0x20b8($t3)
    s7 = 0x1f << 16;                                            // 0x0010117c: lui $s7, 0x1f
    g_001edf38 = 0;  // Global at 0x001edf38                    // 0x00101180: sw $zero, -0x20c8($t2)
    s6 = 0x22 << 16;                                            // 0x00101184: lui $s6, 0x22
    g_001edf54 = a1;  // Global at 0x001edf54                   // 0x00101188: sw $a1, -0x20ac($s5)
    g_001edf50 = a0;  // Global at 0x001edf50                   // 0x0010118c: sw $a0, -0x20b0($s4)
label_0x101190:
    a1 = 0x8000 << 16;                                          // 0x00101190: lui $a1, 0x8000
    a1 = a1 | 0x592;                                            // 0x00101198: ori $a1, $a1, 0x592
    func_001174d8();  // 1174d8                                // 0x0010119c: jal 0x1174d8
    if (a1 >= 0) goto label_0x1011f4;                           // 0x001011a8: bgezl $a1, 0x1011f4
    v0 = g_0024b94c;  // Global at 0x0024b94c                   // 0x001011ac: lw $v0, 0x24($s1)
    v0 = g_001edf10;  // Global at 0x001edf10                   // 0x001011b0: lw $v0, -0x20f0($s7)
    if (v0 <= 0) goto label_0x1011c4;                           // 0x001011b4: blez $v0, 0x1011c4
    a2 = g_001edf54;  // Global at 0x001edf54                   // 0x001011b8: lw $a2, -0x20ac($s5)
    func_00116508();  // 116508                                // 0x001011bc: jal 0x116508
    a0 = &str_0021fe38;  // "Libcdvd Exit\n"                    // 0x001011c0: addiu $a0, $s6, -0x1c8
label_0x1011c4:
    v0 = 0x10 << 16;                                            // 0x001011c4: lui $v0, 0x10
    v1 = -1;                                                    // 0x001011c8: addiu $v1, $zero, -1
    /* nop */                                                   // 0x001011cc: nop 
label_0x1011d0:
    v0 = v0 + -1;                                               // 0x001011d0: addiu $v0, $v0, -1
    /* nop */                                                   // 0x001011d4: nop 
    /* nop */                                                   // 0x001011d8: nop 
    /* nop */                                                   // 0x001011dc: nop 
    /* nop */                                                   // 0x001011e0: nop 
    if (v0 != v1) goto label_0x1011d0;                          // 0x001011e4: bne $v0, $v1, 0x1011d0
    /* nop */                                                   // 0x001011e8: nop 
    goto label_0x101190;                                        // 0x001011ec: b 0x101190
    /* nop */                                                   // 0x001011f0: nop 
label_0x1011f4:
    if (v0 == 0) goto label_0x10124c;                           // 0x001011f4: beqz $v0, 0x10124c
    g_0024b980 = s3;  // Global at 0x0024b980                   // 0x001011fc: sw $s3, -0x4680($s0)
    g_001edf50 = 0;  // Global at 0x001edf50                    // 0x00101200: sw $zero, -0x20b0($s4)
    func_00116c90();  // 116c90                                // 0x00101204: jal 0x116c90
    a1 = 4;                                                     // 0x00101208: addiu $a1, $zero, 4
    s0 = fp + -0xf00;                                           // 0x0010120c: addiu $s0, $fp, -0xf00
    local_0 = 0;                                                // 0x00101218: sw $zero, 0($sp)
    t0 = 4;                                                     // 0x00101224: addiu $t0, $zero, 4
    t2 = 0x10;                                                  // 0x0010122c: addiu $t2, $zero, 0x10
    func_001176a8();  // 1176a8                                // 0x00101230: jal 0x1176a8
    if (v0 >= 0) goto label_0x10127c;                           // 0x00101238: bgez $v0, 0x10127c
    v0 = 0x1f << 16;                                            // 0x0010123c: lui $v0, 0x1f
    g_001edf24 = 0;  // Global at 0x001edf24                    // 0x00101240: sw $zero, -0x20dc($v0)
    goto label_0x101378;                                        // 0x00101244: b 0x101378
label_0x10124c:
    v0 = 0x10 << 16;                                            // 0x0010124c: lui $v0, 0x10
    v1 = -1;                                                    // 0x00101250: addiu $v1, $zero, -1
    /* nop */                                                   // 0x00101254: nop 
label_0x101258:
    v0 = v0 + -1;                                               // 0x00101258: addiu $v0, $v0, -1
    /* nop */                                                   // 0x0010125c: nop 
    /* nop */                                                   // 0x00101260: nop 
    /* nop */                                                   // 0x00101264: nop 
    /* nop */                                                   // 0x00101268: nop 
    if (v0 != v1) goto label_0x101258;                          // 0x0010126c: bne $v0, $v1, 0x101258
    /* nop */                                                   // 0x00101270: nop 
    goto label_0x101190;                                        // 0x00101274: b 0x101190
    /* nop */                                                   // 0x00101278: nop 
label_0x10127c:
    a1 = 0x2000 << 16;                                          // 0x0010127c: lui $a1, 0x2000
    v0 = s0 + 0xc;                                              // 0x00101280: addiu $v0, $s0, 0xc
    v0 = v0 | a1;                                               // 0x00101284: or $v0, $v0, $a1
    v1 = s0 + 4;                                                // 0x00101288: addiu $v1, $s0, 4
    a0 = s0 + 8;                                                // 0x0010128c: addiu $a0, $s0, 8
    a2 = g_001ef10c;  // Global at 0x001ef10c                   // 0x00101290: lw $a2, 0($v0)
    a0 = a0 | a1;                                               // 0x00101294: or $a0, $a0, $a1
    v1 = v1 | a1;                                               // 0x00101298: or $v1, $v1, $a1
    a1 = g_001ef104;  // Global at 0x001ef104                   // 0x0010129c: lw $a1, 0($v1)
    s0 = 1;                                                     // 0x001012a0: addiu $s0, $zero, 1
    v0 = 0xff;                                                  // 0x001012a4: addiu $v0, $zero, 0xff
    if (a2 == v0) goto label_0x101304;                          // 0x001012a8: beq $a2, $v0, 0x101304
    a0 = g_001ef108;  // Global at 0x001ef108                   // 0x001012ac: lw $a0, 0($a0)
    v0 = 0xfe;                                                  // 0x001012b0: addiu $v0, $zero, 0xfe
    if (a2 != v0) goto label_0x1012c8;                          // 0x001012b4: bne $a2, $v0, 0x1012c8
    a2 = -1;                                                    // 0x001012b8: addiu $a2, $zero, -1
    v0 = 0x1f << 16;                                            // 0x001012bc: lui $v0, 0x1f
    goto label_0x101304;                                        // 0x001012c0: b 0x101304
    g_001edf10 = s0;  // Global at 0x001edf10                   // 0x001012c4: sw $s0, -0x20f0($v0)
label_0x1012c8:
    v0 = a1 + 0xff;                                             // 0x001012c8: addiu $v0, $a1, 0xff
    v1 = (a2 < a1) ? 1 : 0;                                     // 0x001012cc: slt $v1, $a2, $a1
    if (v1 != 0) v0 = a1;                                       // 0x001012d0: movn $v0, $a1, $v1
    v0 = v0 >> 8;                                               // 0x001012d4: sra $v0, $v0, 8
    v0 = (v0 < 2) ? 1 : 0;                                      // 0x001012d8: slti $v0, $v0, 2
    /* bnezl $v0, 0x101304 */                                   // 0x001012dc: bnezl $v0, 0x101304
    s0 = 2;                                                     // 0x001012e0: addiu $s0, $zero, 2
    v1 = (a2 < a0) ? 1 : 0;                                     // 0x001012e4: slt $v1, $a2, $a0
    v0 = a0 + 0xff;                                             // 0x001012e8: addiu $v0, $a0, 0xff
    if (v1 != 0) v0 = a0;                                       // 0x001012ec: movn $v0, $a0, $v1
    v0 = v0 >> 8;                                               // 0x001012f0: sra $v0, $v0, 8
    v0 = (v0 < 2) ? 1 : 0;                                      // 0x001012f4: slti $v0, $v0, 2
    if (v0 == 0) goto label_0x101308;                           // 0x001012f8: beqz $v0, 0x101308
    a0 = 0x1f << 16;                                            // 0x001012fc: lui $a0, 0x1f
    s0 = 2;                                                     // 0x00101300: addiu $s0, $zero, 2
label_0x101304:
    a0 = 0x1f << 16;                                            // 0x00101304: lui $a0, 0x1f
label_0x101308:
    g_001edf24 = 0;  // Global at 0x001edf24                    // 0x00101308: sw $zero, -0x20dc($a0)
    if (s3 < 0) goto label_0x101364;                            // 0x0010130c: bltz $s3, 0x101364
    v0 = (s3 < 2) ? 1 : 0;                                      // 0x00101310: slti $v0, $s3, 2
    if (v0 != 0) goto label_0x101364;                           // 0x00101314: bnez $v0, 0x101364
    v0 = 5;                                                     // 0x00101318: addiu $v0, $zero, 5
    if (s3 != v0) goto label_0x101364;                          // 0x0010131c: bne $s3, $v0, 0x101364
    v0 = 0x1f << 16;                                            // 0x00101320: lui $v0, 0x1f
    v1 = g_001edf10;  // Global at 0x001edf10                   // 0x00101324: lw $v1, -0x20f0($v0)
    if (v1 <= 0) goto label_0x101338;                           // 0x00101328: blez $v1, 0x101338
    a0 = 0x22 << 16;                                            // 0x0010132c: lui $a0, 0x22
    func_00116508();  // 116508                                // 0x00101330: jal 0x116508
    a0 = &str_0021fe58;  // "OLD DiskReady Call\n"              // 0x00101334: addiu $a0, $a0, -0x1a8
label_0x101338:
    func_00100668();  // 100668                                // 0x00101338: jal 0x100668
    /* nop */                                                   // 0x0010133c: nop 
    a0 = -1;                                                    // 0x00101340: addiu $a0, $zero, -1
    v0 = 0x1f << 16;                                            // 0x00101344: lui $v0, 0x1f
    g_001edf28 = a0;  // Global at 0x001edf28                   // 0x00101348: sw $a0, -0x20d8($v0)
    v1 = 0x1f << 16;                                            // 0x0010134c: lui $v1, 0x1f
    g_001edf2c = a0;  // Global at 0x001edf2c                   // 0x00101350: sw $a0, -0x20d4($v1)
    v0 = 0x1f << 16;                                            // 0x00101354: lui $v0, 0x1f
    g_001edf20 = a0;  // Global at 0x001edf20                   // 0x00101358: sw $a0, -0x20e0($v0)
    goto label_0x101378;                                        // 0x0010135c: b 0x101378
label_0x101364:
    func_001005b0();  // 1005b0                                // 0x00101364: jal 0x1005b0
    /* nop */                                                   // 0x00101368: nop 
    func_001007e0();  // 1007e0                                // 0x0010136c: jal 0x1007e0
    /* nop */                                                   // 0x00101370: nop 
label_0x101378:
    return;                                                     // 0x001013a0: jr $ra
    sp = sp + 0xb0;                                             // 0x001013a4: addiu $sp, $sp, 0xb0
}