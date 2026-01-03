void func_001440b0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x90;                                            // 0x001440b0: addiu $sp, $sp, -0x90
    s7 = 1;                                                     // 0x001440bc: addiu $s7, $zero, 1
    s6 = 0x22;                                                  // 0x001440c4: addiu $s6, $zero, 0x22
    s5 = 0x23;                                                  // 0x001440cc: addiu $s5, $zero, 0x23
    s4 = 0x22 << 16;                                            // 0x001440d4: lui $s4, 0x22
    s3 = 0xf;                                                   // 0x001440dc: addiu $s3, $zero, 0xf
label_0x1440f8:
    func_00145208();  // 145208                                // 0x001440f8: jal 0x145208
    if (s0 == s6) goto label_0x144164;                          // 0x00144104: beq $s0, $s6, 0x144164
    v0 = ((unsigned)s0 < (unsigned)0x23) ? 1 : 0;               // 0x00144108: sltiu $v0, $s0, 0x23
    if (v0 == 0) goto label_0x144124;                           // 0x0014410c: beqz $v0, 0x144124
    /* nop */                                                   // 0x00144110: nop 
    if (s0 == 0) goto label_0x144138;                           // 0x00144114: beqz $s0, 0x144138
    goto label_0x144184;                                        // 0x0014411c: b 0x144184
    s2 = s2 + s0;                                               // 0x00144120: addu $s2, $s2, $s0
label_0x144124:
    if (s0 != s5) goto label_0x144184;                          // 0x00144124: bnel $s0, $s5, 0x144184
    s2 = s2 + s0;                                               // 0x00144128: addu $s2, $s2, $s0
    v0 = 1;                                                     // 0x0014412c: addiu $v0, $zero, 1
    goto label_0x144188;                                        // 0x00144130: b 0x144188
    s2 = s2 + 0x21;                                             // 0x00144134: addiu $s2, $s2, 0x21
label_0x144138:
    func_00145478();  // 145478                                // 0x00144138: jal 0x145478
    a1 = 0xb;                                                   // 0x0014413c: addiu $a1, $zero, 0xb
    v0 = *(int32_t*)((s1) + 0x860);                             // 0x00144144: lw $v0, 0x860($s1)
    if (v0 == 0) goto label_0x14416c;                           // 0x00144148: beqz $v0, 0x14416c
    a1 = &str_00226668;  // "= Skip to the next picture ="      // 0x0014414c: addiu $a1, $s4, 0x6668
    if (v1 != s3) goto label_0x144170;                          // 0x00144150: bne $v1, $s3, 0x144170
    func_00145598();  // 145598                                // 0x0014415c: jal 0x145598
    a1 = 0xb;                                                   // 0x00144160: addiu $a1, $zero, 0xb
label_0x144164:
    goto label_0x144188;                                        // 0x00144164: b 0x144188
    v0 = 1;                                                     // 0x00144168: addiu $v0, $zero, 1
label_0x14416c:
label_0x144170:
    func_001484f8();  // 1484f8                                // 0x00144170: jal 0x1484f8
    *(uint32_t*)((s1) + 0x134) = s7;                            // 0x00144178: sw $s7, 0x134($s1)
    goto label_0x144194;                                        // 0x0014417c: b 0x144194
    v0 = 1;                                                     // 0x00144180: addiu $v0, $zero, 1
label_0x144184:
label_0x144188:
    if (v0 != 0) goto label_0x1440f8;                           // 0x00144188: bnez $v0, 0x1440f8
label_0x144194:
    return;                                                     // 0x001441b8: jr $ra
    sp = sp + 0x90;                                             // 0x001441bc: addiu $sp, $sp, 0x90
}