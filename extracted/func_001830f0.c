void func_001830f0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x40;                                            // 0x001830f0: addiu $sp, $sp, -0x40
    v0 = 0xffff << 16;                                          // 0x001830f4: lui $v0, 0xffff
    v0 = v0 | 0xffff;                                           // 0x001830fc: ori $v0, $v0, 0xffff
    if (a1 != v0) goto label_0x183118;                          // 0x00183108: bne $a1, $v0, 0x183118
    goto label_0x18316c;                                        // 0x00183110: b 0x18316c
label_0x183118:
    goto label_0x18312c;                                        // 0x00183118: b 0x18312c
    s0 = 1;                                                     // 0x0018311c: addiu $s0, $zero, 1
label_0x183120:
    s0 = s0 + 1;                                                // 0x00183120: addiu $s0, $s0, 1
    v0 = v0 | 0xffff;                                           // 0x00183124: ori $v0, $v0, 0xffff
    a1 = a1 & v0;                                               // 0x00183128: and $a1, $a1, $v0
label_0x18312c:
    func_00182bd0();  // 0x182b88                                // 0x00183130: jal 0x182b88
    v1 = local_0;                                               // 0x00183138: lw $v1, 0($sp)
    if (v1 == 0) goto label_0x18314c;                           // 0x0018313c: beqz $v1, 0x18314c
    goto label_0x18316c;                                        // 0x00183144: b 0x18316c
label_0x18314c:
    v0 = 0xffff << 16;                                          // 0x0018314c: lui $v0, 0xffff
    v0 = v0 | 0xffff;                                           // 0x00183150: ori $v0, $v0, 0xffff
    if (a1 == v0) goto label_0x18316c;                          // 0x00183154: beq $a1, $v0, 0x18316c
    if (a1 < 0) goto label_0x183120;                            // 0x0018315c: bltz $a1, 0x183120
    v0 = 0x7fff << 16;                                          // 0x00183160: lui $v0, 0x7fff
    v0 = 0x8101 << 16;                                          // 0x00183164: lui $v0, 0x8101
    v0 = v0 | 0x9002;                                           // 0x00183168: ori $v0, $v0, 0x9002
label_0x18316c:
    return;                                                     // 0x00183178: jr $ra
    sp = sp + 0x40;                                             // 0x0018317c: addiu $sp, $sp, 0x40
}