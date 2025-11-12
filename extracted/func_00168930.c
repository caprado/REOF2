void func_00168930() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x00168930: addiu $sp, $sp, -0x40
    v0 = (s2 < 4) ? 1 : 0;                                      // 0x0016893c: slti $v0, $s2, 4
    if (v0 != 0) goto label_0x1689d4;                           // 0x00168960: bnez $v0, 0x1689d4
    s6 = 0xff;                                                  // 0x00168968: addiu $s6, $zero, 0xff
    s5 = 0xf8;                                                  // 0x0016896c: addiu $s5, $zero, 0xf8
    s4 = 0xf;                                                   // 0x00168970: addiu $s4, $zero, 0xf
    s3 = 3;                                                     // 0x00168974: addiu $s3, $zero, 3
label_0x168978:
    v0 = *(uint8_t*)(s0);                                       // 0x00168978: lbu $v0, 0($s0)
    if (v0 != s6) goto label_0x1689c8;                          // 0x0016897c: bnel $v0, $s6, 0x1689c8
    s2 = s2 + -1;                                               // 0x00168980: addiu $s2, $s2, -1
    v0 = *(uint8_t*)((s0) + 1);                                 // 0x00168984: lbu $v0, 1($s0)
    v0 = v0 & 0xf8;                                             // 0x00168988: andi $v0, $v0, 0xf8
    if (v0 != s5) goto label_0x1689c8;                          // 0x0016898c: bnel $v0, $s5, 0x1689c8
    s2 = s2 + -1;                                               // 0x00168990: addiu $s2, $s2, -1
    func_00168a80();  // 0x168a00                                // 0x00168998: jal 0x168a00
    v0 = *(uint8_t*)(s1);                                       // 0x001689a0: lbu $v0, 0($s1)
    /* beqzl $v0, 0x1689c8 */                                   // 0x001689a4: beqzl $v0, 0x1689c8
    s2 = s2 + -1;                                               // 0x001689a8: addiu $s2, $s2, -1
    v0 = *(uint8_t*)((s1) + 2);                                 // 0x001689ac: lbu $v0, 2($s1)
    if (v0 == s4) goto label_0x1689c8;                          // 0x001689b0: beql $v0, $s4, 0x1689c8
    s2 = s2 + -1;                                               // 0x001689b4: addiu $s2, $s2, -1
    v1 = *(uint8_t*)((s1) + 3);                                 // 0x001689b8: lbu $v1, 3($s1)
    if (v1 != s3) goto label_0x1689d8;                          // 0x001689bc: bne $v1, $s3, 0x1689d8
    s2 = s2 + -1;                                               // 0x001689c4: addiu $s2, $s2, -1
label_0x1689c8:
    v0 = (s2 < 4) ? 1 : 0;                                      // 0x001689c8: slti $v0, $s2, 4
    if (v0 == 0) goto label_0x168978;                           // 0x001689cc: beqz $v0, 0x168978
    s0 = s0 + 1;                                                // 0x001689d0: addiu $s0, $s0, 1
label_0x1689d4:
label_0x1689d8:
    return;                                                     // 0x001689f8: jr $ra
    sp = sp + 0x40;                                             // 0x001689fc: addiu $sp, $sp, 0x40
}