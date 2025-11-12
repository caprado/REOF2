void func_0013a770() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x0013a770: addiu $sp, $sp, -0x30
    s4 = 0x25 << 16;                                            // 0x0013a778: lui $s4, 0x25
    a2 = 0x1000;                                                // 0x0013a794: addiu $a2, $zero, 0x1000
    a0 = s4 + 0x3d40;                                           // 0x0013a798: addiu $a0, $s4, 0x3d40
    func_00107d30();  // 0x107c70                                // 0x0013a7a8: jal 0x107c70
    v1 = 0x20 << 16;                                            // 0x0013a7b0: lui $v1, 0x20
    v0 = g_00203ed0;  // Global at 0x00203ed0                   // 0x0013a7b4: lw $v0, 0x3ed0($v1)
    if (v0 == 0) goto label_0x13a7c8;                           // 0x0013a7b8: beqz $v0, 0x13a7c8
    /* nop */                                                   // 0x0013a7bc: nop 
    func_0013a6c0();  // 0x13a698                                // 0x0013a7c0: jal 0x13a698
    /* nop */                                                   // 0x0013a7c4: nop 
label_0x13a7c8:
    if (s0 == 0) goto label_0x13a7e0;                           // 0x0013a7c8: beqz $s0, 0x13a7e0
    /* nop */                                                   // 0x0013a7cc: nop 
    if (s2 == 0) goto label_0x13a7e0;                           // 0x0013a7d0: beqz $s2, 0x13a7e0
    /* nop */                                                   // 0x0013a7d4: nop 
    if (s1 != 0) goto label_0x13a7e8;                           // 0x0013a7d8: bnez $s1, 0x13a7e8
    /* nop */                                                   // 0x0013a7dc: nop 
label_0x13a7e0:
    func_0013a6c0();  // 0x13a698                                // 0x0013a7e0: jal 0x13a698
    /* nop */                                                   // 0x0013a7e4: nop 
label_0x13a7e8:
    if (s0 == 0) goto label_0x13a8fc;                           // 0x0013a7e8: beqz $s0, 0x13a8fc
    if (s2 != 0) goto label_0x13a820;                           // 0x0013a7f0: bnez $s2, 0x13a820
    v0 = 0x20 << 16;                                            // 0x0013a7f4: lui $v0, 0x20
    v1 = g_00203ee8;  // Global at 0x00203ee8                   // 0x0013a7f8: lw $v1, 0x3ee8($v0)
    /* bnezl $v1, 0x13a8fc */                                   // 0x0013a7fc: bnezl $v1, 0x13a8fc
    a0 = 0x22 << 16;                                            // 0x0013a804: lui $a0, 0x22
    func_00116598();  // 0x116508                                // 0x0013a80c: jal 0x116508
    a0 = &str_002255b0;  // "DVCI: Invalidate filelist buffer size.\r\n" // 0x0013a810: addiu $a0, $a0, 0x55b0
    goto label_0x13a8fc;                                        // 0x0013a814: b 0x13a8fc
    /* nop */                                                   // 0x0013a81c: nop 
label_0x13a820:
    if (s1 != 0) goto label_0x13a850;                           // 0x0013a820: bnez $s1, 0x13a850
    v0 = 0x20 << 16;                                            // 0x0013a828: lui $v0, 0x20
    v1 = g_00203ee8;  // Global at 0x00203ee8                   // 0x0013a82c: lw $v1, 0x3ee8($v0)
    /* bnezl $v1, 0x13a8fc */                                   // 0x0013a830: bnezl $v1, 0x13a8fc
    a0 = 0x22 << 16;                                            // 0x0013a838: lui $a0, 0x22
    func_00116598();  // 0x116508                                // 0x0013a840: jal 0x116508
    a0 = &str_002255e0;  // "DVCI: Can't read filelist file.(%s)\n" // 0x0013a844: addiu $a0, $a0, 0x55e0
    goto label_0x13a8fc;                                        // 0x0013a848: b 0x13a8fc
label_0x13a850:
    s4 = s4 + 0x3d40;                                           // 0x0013a854: addiu $s4, $s4, 0x3d40
    func_00107d30();  // 0x107c70                                // 0x0013a858: jal 0x107c70
    func_0013a3f8();  // 0x13a270                                // 0x0013a864: jal 0x13a270
    /* bnezl $v0, 0x13a8b0 */                                   // 0x0013a86c: bnezl $v0, 0x13a8b0
    s0 = s3 + 9;                                                // 0x0013a870: addiu $s0, $s3, 9
    v0 = 0x20 << 16;                                            // 0x0013a874: lui $v0, 0x20
    v1 = g_00203ee8;  // Global at 0x00203ee8                   // 0x0013a878: lw $v1, 0x3ee8($v0)
    if (v1 != 0) goto label_0x13a898;                           // 0x0013a87c: bnez $v1, 0x13a898
    a1 = 0x22 << 16;                                            // 0x0013a880: lui $a1, 0x22
    a0 = 0x22 << 16;                                            // 0x0013a884: lui $a0, 0x22
    func_00116598();  // 0x116508                                // 0x0013a88c: jal 0x116508
    a0 = &str_00225610;  // "E0111501:can't read filelist.(dvCiLoadDirInfo)" // 0x0013a890: addiu $a0, $a0, 0x5610
    a1 = 0x22 << 16;                                            // 0x0013a894: lui $a1, 0x22
label_0x13a898:
    func_001392e8();  // 0x1392b8                                // 0x0013a89c: jal 0x1392b8
    a1 = &str_00225638;  // "\nHTCI/PS2EE Ver.2.68 Build:Jul 28 2003 17:50:10\n" // 0x0013a8a0: addiu $a1, $a1, 0x5638
    goto label_0x13a8fc;                                        // 0x0013a8a4: b 0x13a8fc
    /* nop */                                                   // 0x0013a8ac: nop 
    /* divide: s1 / s0 -> hi:lo */                              // 0x0013a8b4: divu $zero, $s1, $s0
    a2 = 0x1000;                                                // 0x0013a8b8: addiu $a2, $zero, 0x1000
    /* beqzl $s0, 0x13a8cc */                                   // 0x0013a8c4: beqzl $s0, 0x13a8cc
    /* break (trap) */                                          // 0x0013a8c8: break 0, 7
    /* mflo $s1 */                                              // 0x0013a8cc
    func_0013a270();  // 0x13a0d8                                // 0x0013a8d4: jal 0x13a0d8
    s1 = s1 << 3;                                               // 0x0013a8d8: sll $s1, $s1, 3
    func_0013a5d0();  // 0x13a3f8                                // 0x0013a8e0: jal 0x13a3f8
    /* beqzl $s0, 0x13a8f0 */                                   // 0x0013a8e8: beqzl $s0, 0x13a8f0
    /* break (trap) */                                          // 0x0013a8ec: break 0, 7
    v1 = s3 + 1;                                                // 0x0013a8f0: addiu $v1, $s3, 1
    /* multiply: v0 * v1 -> hi:lo */                            // 0x0013a8f4: mult $ac2, $v0, $v1
    v0 = s1 + v0;                                               // 0x0013a8f8: addu $v0, $s1, $v0
label_0x13a8fc:
    return;                                                     // 0x0013a914: jr $ra
    sp = sp + 0x30;                                             // 0x0013a918: addiu $sp, $sp, 0x30
}