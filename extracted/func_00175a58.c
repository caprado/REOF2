void func_00175a58() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00175a58: addiu $sp, $sp, -0x20
    v1 = 0x21 << 16;                                            // 0x00175a5c: lui $v1, 0x21
    v1 = v1 + 0x5738;                                           // 0x00175a64: addiu $v1, $v1, 0x5738
    s1 = 7;                                                     // 0x00175a6c: addiu $s1, $zero, 7
    s0 = v1 + 0x54;                                             // 0x00175a74: addiu $s0, $v1, 0x54
    v0 = g_00215738;  // Global at 0x00215738                   // 0x00175a78: lw $v0, 0($v1)
    v0 = v0 + 1;                                                // 0x00175a7c: addiu $v0, $v0, 1
    g_00215738 = v0;  // Global at 0x00215738                   // 0x00175a80: sw $v0, 0($v1)
    v0 = g_0021578c;  // Global at 0x0021578c                   // 0x00175a84: lw $v0, 0($s0)
label_0x175a88:
    s0 = s0 + 4;                                                // 0x00175a88: addiu $s0, $s0, 4
    if (v0 == 0) goto label_0x175a9c;                           // 0x00175a8c: beqz $v0, 0x175a9c
    func_00175b10();  // 0x175ac0                                // 0x00175a94: jal 0x175ac0
    /* nop */                                                   // 0x00175a98: nop 
label_0x175a9c:
    s1 = s1 + -1;                                               // 0x00175a9c: addiu $s1, $s1, -1
    if (s1 >= 0) goto label_0x175a88;                           // 0x00175aa0: bgezl $s1, 0x175a88
    v0 = g_00215790;  // Global at 0x00215790                   // 0x00175aa4: lw $v0, 0($s0)
    return;                                                     // 0x00175ab4: jr $ra
    sp = sp + 0x20;                                             // 0x00175ab8: addiu $sp, $sp, 0x20
}