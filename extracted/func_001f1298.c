void func_001f1298() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x80;                                            // 0x001f1298: addiu $sp, $sp, -0x80
    s3 = 0x8007 << 16;                                          // 0x001f12a0: lui $s3, 0x8007
    v0 = g_80076700;  // Global at 0x80076700                   // 0x001f12b8: lw $v0, 0x6700($s3)
    if (v0 <= 0) goto label_0x1f1370;                           // 0x001f12cc: blez $v0, 0x1f1370
    s4 = 0x8007 << 16;                                          // 0x001f12d4: lui $s4, 0x8007
    s2 = 0x14;                                                  // 0x001f12d8: addiu $s2, $zero, 0x14
    /* nop */                                                   // 0x001f12dc: nop 
label_0x1f12e0:
    s1 = s4 + 0x6740;                                           // 0x001f12e0: addiu $s1, $s4, 0x6740
    /* multiply: s0 * s2 -> hi:lo */                            // 0x001f12e4: mult $ac2, $s0, $s2
    v0 = v0 + s1;                                               // 0x001f12ec: addu $v0, $v0, $s1
    func_00076038();  // BIOS/System - 0x76038                  // 0x001f12f0: jal 0x76038
    a1 = *(uint16_t*)(v0);                                      // 0x001f12f4: lhu $a1, 0($v0)
    v0 = (s5 < v0) ? 1 : 0;                                     // 0x001f12f8: slt $v0, $s5, $v0
    if (v0 == 0) goto label_0x1f1360;                           // 0x001f12fc: beqz $v0, 0x1f1360
    v0 = g_80076700;  // Global at 0x80076700                   // 0x001f1300: lw $v0, 0x6700($s3)
    a0 = v0 + -1;                                               // 0x001f1304: addiu $a0, $v0, -1
    v1 = (a0 < s0) ? 1 : 0;                                     // 0x001f1308: slt $v1, $a0, $s0
    if (v1 != 0) goto label_0x1f1370;                           // 0x001f130c: bnez $v1, 0x1f1370
    /* multiply: a0 * s2 -> hi:lo */                            // 0x001f1310: mult $ac2, $a0, $s2
    v1 = v0 + s1;                                               // 0x001f1314: addu $v1, $v0, $s1
label_0x1f1318:
    a3 = *(int32_t*)((v1) + 0x10);                              // 0x001f1328: lw $a3, 0x10($v1)
    *(uint32_t*)((v1) + 0x24) = a3;                             // 0x001f133c: sw $a3, 0x24($v1)
    a0 = a0 + -1;                                               // 0x001f1340: addiu $a0, $a0, -1
    v1 = v1 + -0x14;                                            // 0x001f1344: addiu $v1, $v1, -0x14
    v0 = (a0 < s0) ? 1 : 0;                                     // 0x001f1348: slt $v0, $a0, $s0
    /* nop */                                                   // 0x001f134c: nop 
    if (v0 == 0) goto label_0x1f1318;                           // 0x001f1350: beqz $v0, 0x1f1318
    /* nop */                                                   // 0x001f1354: nop 
    goto label_0x1f1374;                                        // 0x001f1358: b 0x1f1374
label_0x1f1360:
    s0 = s0 + 1;                                                // 0x001f1360: addiu $s0, $s0, 1
    v0 = (s0 < v0) ? 1 : 0;                                     // 0x001f1364: slt $v0, $s0, $v0
    if (v0 != 0) goto label_0x1f12e0;                           // 0x001f1368: bnez $v0, 0x1f12e0
    s2 = 0x14;                                                  // 0x001f136c: addiu $s2, $zero, 0x14
label_0x1f1370:
label_0x1f1374:
    return;                                                     // 0x001f1394: jr $ra
    sp = sp + 0x80;                                             // 0x001f1398: addiu $sp, $sp, 0x80
}