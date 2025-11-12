void func_00136df8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x290;                                           // 0x00136df8: addiu $sp, $sp, -0x290
    s3 = sp + 0x130;                                            // 0x00136e08: addiu $s3, $sp, 0x130
    func_001358d8();  // 0x135790                                // 0x00136e24: jal 0x135790
    func_001355f0();  // 0x135548                                // 0x00136e34: jal 0x135548
    a1 = 0xca;                                                  // 0x00136e44: addiu $a1, $zero, 0xca
    v0 = *(int32_t*)((s2) + 0x60);                              // 0x00136e48: lw $v0, 0x60($s2)
    if (v0 == 0) goto label_0x136e8c;                           // 0x00136e50: beqz $v0, 0x136e8c
    /* call function at address in v0 */                        // 0x00136e58: jalr $v0
    /* nop */                                                   // 0x00136e5c: nop 
    v0 = *(int32_t*)((s2) + 0x60);                              // 0x00136e68: lw $v0, 0x60($s2)
    a1 = 0xcb;                                                  // 0x00136e70: addiu $a1, $zero, 0xcb
    /* call function at address in v0 */                        // 0x00136e78: jalr $v0
label_0x136e8c:
    return;                                                     // 0x00136ea4: jr $ra
    sp = sp + 0x290;                                            // 0x00136ea8: addiu $sp, $sp, 0x290
}