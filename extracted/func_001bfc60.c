void func_001bfc60() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001bfc60: addiu $sp, $sp, -0x20
    func_001bf010();  // 1bf010                                // 0x001bfc6c: jal 0x1bf010
    if (v0 < 0) goto label_0x1bfc9c;                            // 0x001bfc74: bltz $v0, 0x1bfc9c
    /* nop */                                                   // 0x001bfc78: nop 
    v1 = *(int32_t*)((s0) + 0x14);                              // 0x001bfc7c: lw $v1, 0x14($s0)
    a0 = v1 + 1;                                                // 0x001bfc80: addiu $a0, $v1, 1
    *(uint32_t*)((s0) + 0x14) = a0;                             // 0x001bfc84: sw $a0, 0x14($s0)
    v1 = *(int32_t*)((s0) + 0x10);                              // 0x001bfc88: lw $v1, 0x10($s0)
    v1 = (a0 < v1) ? 1 : 0;                                     // 0x001bfc8c: slt $v1, $a0, $v1
    if (v1 != 0) goto label_0x1bfc9c;                           // 0x001bfc90: bnez $v1, 0x1bfc9c
    /* nop */                                                   // 0x001bfc94: nop 
    *(uint32_t*)((s0) + 0x14) = 0;                              // 0x001bfc98: sw $zero, 0x14($s0)
label_0x1bfc9c:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001bfca0: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001bfca4: jr $ra
    sp = sp + 0x20;                                             // 0x001bfca8: addiu $sp, $sp, 0x20
}