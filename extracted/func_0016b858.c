void func_0016b858() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0016b858: addiu $sp, $sp, -0x10
    v1 = *(int32_t*)((s0) + 0x2ab0);                            // 0x0016b868: lw $v1, 0x2ab0($s0)
    if (v1 == 0) goto label_0x16b894;                           // 0x0016b86c: beqz $v1, 0x16b894
    func_0016b8a8();  // 16b8a8                                // 0x0016b874: jal 0x16b8a8
    /* nop */                                                   // 0x0016b878: nop 
    if (v0 <= 0) goto label_0x16b890;                           // 0x0016b87c: blezl $v0, 0x16b890
    v0 = *(int32_t*)((s0) + 0x2ab0);                            // 0x0016b880: lw $v0, 0x2ab0($s0)
    goto label_0x16b894;                                        // 0x0016b884: b 0x16b894
    /* nop */                                                   // 0x0016b88c: nop 
label_0x16b890:
    v0 = v0 + 0x8a0;                                            // 0x0016b890: addiu $v0, $v0, 0x8a0
label_0x16b894:
    return;                                                     // 0x0016b89c: jr $ra
    sp = sp + 0x10;                                             // 0x0016b8a0: addiu $sp, $sp, 0x10
}