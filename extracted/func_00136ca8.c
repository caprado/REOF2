void func_00136ca8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00136ca8: addiu $sp, $sp, -0x20
    if (s0 != 0) goto label_0x136cd4;                           // 0x00136cc0: bnez $s0, 0x136cd4
    func_00135548();  // 0x135538                                // 0x00136cc8: jal 0x135538
    /* nop */                                                   // 0x00136ccc: nop 
label_0x136cd4:
    func_00136ca8();  // 0x136c58                                // 0x00136cd4: jal 0x136c58
    v1 = 0x25 << 16;                                            // 0x00136cdc: lui $v1, 0x25
    s2 = v1 + 0x39f8;                                           // 0x00136ce0: addiu $s2, $v1, 0x39f8
    v1 = 1;                                                     // 0x00136ce4: addiu $v1, $zero, 1
    if (v0 != v1) goto label_0x136d28;                          // 0x00136cec: bne $v0, $v1, 0x136d28
    func_0010ae00();  // 0x10ac68                                // 0x00136cf4: jal 0x10ac68
    /* nop */                                                   // 0x00136cf8: nop 
    a1 = 0x22 << 16;                                            // 0x00136cfc: lui $a1, 0x22
    a1 = &str_00224c58;  // "cvFsGetNumTr64 #1:handle error"    // 0x00136d1c: addiu $a1, $a1, 0x4c58
    return func_0010a570();  // Tail call                        // 0x00136d20: j 0x10a4d8
    sp = sp + 0x20;                                             // 0x00136d24: addiu $sp, $sp, 0x20
label_0x136d28:
    return;                                                     // 0x00136d38: jr $ra
    sp = sp + 0x20;                                             // 0x00136d3c: addiu $sp, $sp, 0x20
}