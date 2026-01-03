void func_001415b8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001415b8: addiu $sp, $sp, -0x20
    a2 = 0x7f;                                                  // 0x001415bc: addiu $a2, $zero, 0x7f
    s0 = 0x21 << 16;                                            // 0x001415c4: lui $s0, 0x21
    s0 = s0 + 0xc38;                                            // 0x001415c8: addiu $s0, $s0, 0xc38
    func_0010b2a0();  // 10b2a0                                // 0x001415dc: jal 0x10b2a0
    func_0010af38();  // 10af38                                // 0x001415ec: jal 0x10af38
    a2 = 0x7f;                                                  // 0x001415f0: addiu $a2, $zero, 0x7f
    v0 = 0x25 << 16;                                            // 0x001415f4: lui $v0, 0x25
    v0 = v0 + 0x6170;                                           // 0x001415f8: addiu $v0, $v0, 0x6170
    v1 = g_00256170;  // Global at 0x00256170                   // 0x001415fc: lw $v1, 0($v0)
    if (v1 == 0) goto label_0x141610;                           // 0x00141600: beqz $v1, 0x141610
    /* call function at address in v1 */                        // 0x00141608: jalr $v1
    a0 = g_00256174;  // Global at 0x00256174                   // 0x0014160c: lw $a0, 4($v0)
label_0x141610:
    return;                                                     // 0x0014161c: jr $ra
    sp = sp + 0x20;                                             // 0x00141620: addiu $sp, $sp, 0x20
}