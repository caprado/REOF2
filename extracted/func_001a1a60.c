void func_001a1a60() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001a1a60: addiu $sp, $sp, -0x10
    func_001a1a00();  // 1a1a00                                // 0x001a1a68: jal 0x1a1a00
    /* nop */                                                   // 0x001a1a6c: nop 
    v1 = *(int32_t*)((v0) + 0xc);                               // 0x001a1a70: lw $v1, 0xc($v0)
    if (v1 == 0) goto label_0x1a1a8c;                           // 0x001a1a74: beqz $v1, 0x1a1a8c
    /* nop */                                                   // 0x001a1a78: nop 
    FPU_F0 = *(float*)((v0) + 0x10);  // Load float             // 0x001a1a7c: lwc1 $f0, 0x10($v0)
    v0 = 1;                                                     // 0x001a1a80: addiu $v0, $zero, 1
    goto label_0x1a1a94;                                        // 0x001a1a84: b 0x1a1a94
    *(float*)(a1) = FPU_F0;  // Store float                     // 0x001a1a88: swc1 $f0, 0($a1)
label_0x1a1a8c:
    *(uint32_t*)(a1) = 0;                                       // 0x001a1a8c: sw $zero, 0($a1)
label_0x1a1a94:
    return;                                                     // 0x001a1a98: jr $ra
    sp = sp + 0x10;                                             // 0x001a1a9c: addiu $sp, $sp, 0x10
}