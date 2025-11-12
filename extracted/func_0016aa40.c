void func_0016aa40() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0016aa40: addiu $sp, $sp, -0x20
    v1 = *(int32_t*)(s2);                                       // 0x0016aa60: lw $v1, 0($s2)
    v0 = g_002157d4;  // Global at 0x002157d4                   // 0x0016aa64: lw $v0, 0x24($v1)
    /* call function at address in v0 */                        // 0x0016aa68: jalr $v0
    v1 = (v0 < s0) ? 1 : 0;                                     // 0x0016aa74: slt $v1, $v0, $s0
    if (v1 != 0) goto label_0x16aad0;                           // 0x0016aa80: bnez $v1, 0x16aad0
    func_0016ab60();  // 0x16aae8                                // 0x0016aa88: jal 0x16aae8
    /* nop */                                                   // 0x0016aa8c: nop 
    if (v1 == 0) goto label_0x16aad0;                           // 0x0016aa94: beqz $v1, 0x16aad0
    s0 = s0 - v1;                                               // 0x0016aa98: subu $s0, $s0, $v1
    if (s0 <= 0) goto label_0x16aacc;                           // 0x0016aa9c: blez $s0, 0x16aacc
    s1 = s1 + v1;                                               // 0x0016aaa0: addu $s1, $s1, $v1
    func_0016ab60();  // 0x16aae8                                // 0x0016aaac: jal 0x16aae8
    v1 = 0x21 << 16;                                            // 0x0016aab4: lui $v1, 0x21
    if (v0 == s0) goto label_0x16aacc;                          // 0x0016aab8: beq $v0, $s0, 0x16aacc
    v1 = v1 + 0x57b0;                                           // 0x0016aabc: addiu $v1, $v1, 0x57b0
    v0 = g_002157b0;  // Global at 0x002157b0                   // 0x0016aac0: lw $v0, 0($v1)
    v0 = v0 + 1;                                                // 0x0016aac4: addiu $v0, $v0, 1
    g_002157b0 = v0;  // Global at 0x002157b0                   // 0x0016aac8: sw $v0, 0($v1)
label_0x16aacc:
    v0 = 1;                                                     // 0x0016aacc: addiu $v0, $zero, 1
label_0x16aad0:
    return;                                                     // 0x0016aae0: jr $ra
    sp = sp + 0x20;                                             // 0x0016aae4: addiu $sp, $sp, 0x20
}