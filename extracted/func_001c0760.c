void func_001c0760() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001c0760: addiu $sp, $sp, -0x20
    v0 = *(int32_t*)(a0);                                       // 0x001c076c: lw $v0, 0($a0)
    if (v0 == 0) goto label_0x1c0780;                           // 0x001c0770: beqz $v0, 0x1c0780
    goto label_0x1c07b8;                                        // 0x001c0778: b 0x1c07b8
label_0x1c0780:
    func_001bf7e0();  // 0x1bf730                                // 0x001c0780: jal 0x1bf730
    /* nop */                                                   // 0x001c0784: nop 
    v1 = 1;                                                     // 0x001c0788: addiu $v1, $zero, 1
    if (v0 == v1) goto label_0x1c07ac;                          // 0x001c078c: beq $v0, $v1, 0x1c07ac
    /* nop */                                                   // 0x001c0790: nop 
    if (v0 == 0) goto label_0x1c07a4;                           // 0x001c0794: beqz $v0, 0x1c07a4
    /* nop */                                                   // 0x001c0798: nop 
    goto label_0x1c07b4;                                        // 0x001c079c: b 0x1c07b4
    /* nop */                                                   // 0x001c07a0: nop 
label_0x1c07a4:
    goto label_0x1c07b4;                                        // 0x001c07a4: b 0x1c07b4
    *(uint32_t*)((s0) + 0x24) = 0;                              // 0x001c07a8: sw $zero, 0x24($s0)
label_0x1c07ac:
    v0 = -0x100;                                                // 0x001c07ac: addiu $v0, $zero, -0x100
    *(uint32_t*)((s0) + 0x24) = v0;                             // 0x001c07b0: sw $v0, 0x24($s0)
label_0x1c07b4:
label_0x1c07b8:
    func_001bfc20();  // 0x1bfbf0                                // 0x001c07b8: jal 0x1bfbf0
    /* nop */                                                   // 0x001c07bc: nop 
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001c07c4: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001c07c8: jr $ra
    sp = sp + 0x20;                                             // 0x001c07cc: addiu $sp, $sp, 0x20
}