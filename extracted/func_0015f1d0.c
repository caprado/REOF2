void func_0015f1d0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0015f1d0: addiu $sp, $sp, -0x20
    func_0015fc80();  // 15fc80                                // 0x0015f1ec: jal 0x15fc80
    if (v0 != 0) goto label_0x15f220;                           // 0x0015f1f4: bnez $v0, 0x15f220
    a0 = 0x22 << 16;                                            // 0x0015f1fc: lui $a0, 0x22
    a0 = &str_00227aa8;  // "?E211121: filename is longer."     // 0x0015f208: addiu $a0, $a0, 0x7aa8
    return func_001634a8();  // Tail call                        // 0x0015f214: j 0x163410
    sp = sp + 0x20;                                             // 0x0015f218: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x0015f21c: nop 
label_0x15f220:
    func_00160498();  // 160498                                // 0x0015f220: jal 0x160498
    /* nop */                                                   // 0x0015f224: nop 
    v0 = *(int32_t*)(s0);                                       // 0x0015f22c: lw $v0, 0($s0)
    v1 = *(int32_t*)((v0) + 0x3c);                              // 0x0015f230: lw $v1, 0x3c($v0)
    /* call function at address in v1 */                        // 0x0015f234: jalr $v1
    func_0015f3d8();  // 15f3d8                                // 0x0015f244: jal 0x15f3d8
    v0 = 1;                                                     // 0x0015f24c: addiu $v0, $zero, 1
    *(uint32_t*)((s0) + 0x118) = v0;                            // 0x0015f250: sw $v0, 0x118($s0)
    return;                                                     // 0x0015f264: jr $ra
    sp = sp + 0x20;                                             // 0x0015f268: addiu $sp, $sp, 0x20
}