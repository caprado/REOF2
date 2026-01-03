void func_00162aa8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00162aa8: addiu $sp, $sp, -0x20
    func_001630e0();  // 1630e0                                // 0x00162ac4: jal 0x1630e0
    if (v0 == 0) goto label_0x162af0;                           // 0x00162acc: beqz $v0, 0x162af0
    v0 = *(int32_t*)((v0) + 8);                                 // 0x00162ad4: lw $v0, 8($v0)
    if (v0 == 0) goto label_0x162af0;                           // 0x00162ad8: beqz $v0, 0x162af0
    /* call function at address in v0 */                        // 0x00162ae4: jalr $v0
label_0x162af0:
    return;                                                     // 0x00162b04: jr $ra
    sp = sp + 0x20;                                             // 0x00162b08: addiu $sp, $sp, 0x20
}