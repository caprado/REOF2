void func_00136eb0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x290;                                           // 0x00136eb0: addiu $sp, $sp, -0x290
    func_00135220();  // 135220                                // 0x00136ed4: jal 0x135220
    s3 = sp + 0x130;                                            // 0x00136ee4: addiu $s3, $sp, 0x130
    if (s1 == 0) goto label_0x136f50;                           // 0x00136ef0: beqz $s1, 0x136f50
    func_00135790();  // 135790                                // 0x00136ef8: jal 0x135790
    /* nop */                                                   // 0x00136efc: nop 
    v1 = *(int32_t*)((s1) + 0x60);                              // 0x00136f04: lw $v1, 0x60($s1)
    a1 = 0xcc;                                                  // 0x00136f10: addiu $a1, $zero, 0xcc
    if (v1 == 0) goto label_0x136f50;                           // 0x00136f14: beqz $v1, 0x136f50
    /* call function at address in v1 */                        // 0x00136f1c: jalr $v1
    /* nop */                                                   // 0x00136f20: nop 
    v0 = *(int32_t*)((s1) + 0x60);                              // 0x00136f2c: lw $v0, 0x60($s1)
    a1 = 0xcd;                                                  // 0x00136f38: addiu $a1, $zero, 0xcd
    /* call function at address in v0 */                        // 0x00136f3c: jalr $v0
label_0x136f50:
    return;                                                     // 0x00136f68: jr $ra
    sp = sp + 0x290;                                            // 0x00136f6c: addiu $sp, $sp, 0x290
}