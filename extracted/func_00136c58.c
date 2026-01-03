void func_00136c58() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00136c58: addiu $sp, $sp, -0x10
    func_00135220();  // 135220                                // 0x00136c60: jal 0x135220
    /* nop */                                                   // 0x00136c64: nop 
    if (v1 == 0) goto label_0x136ca0;                           // 0x00136c6c: beqz $v1, 0x136ca0
    v0 = *(int32_t*)((v1) + 0x60);                              // 0x00136c74: lw $v0, 0x60($v1)
    if (v0 == 0) goto label_0x136c98;                           // 0x00136c78: beqz $v0, 0x136c98
    a1 = 0x64;                                                  // 0x00136c80: addiu $a1, $zero, 0x64
    /* call function at address in v0 */                        // 0x00136c88: jalr $v0
    goto label_0x136ca0;                                        // 0x00136c90: b 0x136ca0
label_0x136c98:
label_0x136ca0:
    return;                                                     // 0x00136ca0: jr $ra
    sp = sp + 0x10;                                             // 0x00136ca4: addiu $sp, $sp, 0x10
}