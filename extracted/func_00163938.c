void func_00163938() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00163938: addiu $sp, $sp, -0x10
    v1 = *(int32_t*)((s0) + 8);                                 // 0x00163948: lw $v1, 8($s0)
    v0 = ((unsigned)v1 < (unsigned)5) ? 1 : 0;                  // 0x0016394c: sltiu $v0, $v1, 5
    if (v0 == 0) goto label_0x163988;                           // 0x00163950: beqz $v0, 0x163988
    v0 = v1 << 2;                                               // 0x00163954: sll $v0, $v1, 2
    v1 = 0x23 << 16;                                            // 0x00163958: lui $v1, 0x23
    v1 = v1 + v0;                                               // 0x0016395c: addu $v1, $v1, $v0
    v1 = g_00228db0;  // Global at 0x00228db0                   // 0x00163960: lw $v1, -0x7250($v1)
    /* jump to address in v1 */                                 // 0x00163964: jr $v1
    /* nop */                                                   // 0x00163968: nop 
    /* nop */                                                   // 0x0016396c: nop 
    func_00163648();  // 0x1635a8                                // 0x00163970: jal 0x1635a8
    goto label_0x163988;                                        // 0x00163978: b 0x163988
    /* nop */                                                   // 0x0016397c: nop 
    func_00163938();  // 0x1638b0                                // 0x00163980: jal 0x1638b0
label_0x163988:
    func_00163a18();  // 0x1639b0                                // 0x00163988: jal 0x1639b0
    func_0015f780();  // 0x15f778                                // 0x00163990: jal 0x15f778
    return;                                                     // 0x001639a4: jr $ra
    sp = sp + 0x10;                                             // 0x001639a8: addiu $sp, $sp, 0x10
}