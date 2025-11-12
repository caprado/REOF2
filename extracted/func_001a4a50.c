void func_001a4a50() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a1 = *(int32_t*)((a0) + 4);                                 // 0x001a4a50: lw $a1, 4($a0)
    v0 = 0x13;                                                  // 0x001a4a54: addiu $v0, $zero, 0x13
    v1 = *(uint8_t*)(a0);                                       // 0x001a4a58: lbu $v1, 0($a0)
    a0 = *(int32_t*)((gp) + -0x641c);                           // 0x001a4a5c: lw $a0, -0x641c($gp)
    if (v1 == v0) goto label_0x1a4b08;                          // 0x001a4a60: beq $v1, $v0, 0x1a4b08
    a0 = a1 + a0;                                               // 0x001a4a64: addu $a0, $a1, $a0
    v0 = 0x12;                                                  // 0x001a4a68: addiu $v0, $zero, 0x12
    if (v1 == v0) goto label_0x1a4af8;                          // 0x001a4a6c: beq $v1, $v0, 0x1a4af8
    v0 = 0x11;                                                  // 0x001a4a70: addiu $v0, $zero, 0x11
    if (v1 == v0) goto label_0x1a4ae8;                          // 0x001a4a74: beq $v1, $v0, 0x1a4ae8
    /* nop */                                                   // 0x001a4a78: nop 
    v0 = 0x10;                                                  // 0x001a4a7c: addiu $v0, $zero, 0x10
    if (v1 == v0) goto label_0x1a4adc;                          // 0x001a4a80: beq $v1, $v0, 0x1a4adc
    v0 = 0x23;                                                  // 0x001a4a84: addiu $v0, $zero, 0x23
    if (v1 == v0) goto label_0x1a4ad4;                          // 0x001a4a88: beq $v1, $v0, 0x1a4ad4
    /* nop */                                                   // 0x001a4a8c: nop 
    v0 = 0x22;                                                  // 0x001a4a90: addiu $v0, $zero, 0x22
    if (v1 == v0) goto label_0x1a4acc;                          // 0x001a4a94: beq $v1, $v0, 0x1a4acc
    v0 = 0x21;                                                  // 0x001a4a98: addiu $v0, $zero, 0x21
    if (v1 == v0) goto label_0x1a4ac4;                          // 0x001a4a9c: beq $v1, $v0, 0x1a4ac4
    /* nop */                                                   // 0x001a4aa0: nop 
    v0 = 0x20;                                                  // 0x001a4aa4: addiu $v0, $zero, 0x20
    if (v1 == v0) goto label_0x1a4ab8;                          // 0x001a4aa8: beq $v1, $v0, 0x1a4ab8
    /* nop */                                                   // 0x001a4aac: nop 
    goto label_0x1a4b18;                                        // 0x001a4ab0: b 0x1a4b18
    /* nop */                                                   // 0x001a4ab4: nop 
label_0x1a4ab8:
    /* move to FPU: $zero, $f0 */                               // 0x001a4ab8: mtc1 $zero, $f0
    goto label_0x1a4b18;                                        // 0x001a4abc: b 0x1a4b18
    /* nop */                                                   // 0x001a4ac0: nop 
label_0x1a4ac4:
    goto label_0x1a4b18;                                        // 0x001a4ac4: b 0x1a4b18
    FPU_F0 = *(float*)((a0) + 4);  // Load float                // 0x001a4ac8: lwc1 $f0, 4($a0)
label_0x1a4acc:
    goto label_0x1a4b18;                                        // 0x001a4acc: b 0x1a4b18
    FPU_F0 = *(float*)((a0) + 4);  // Load float                // 0x001a4ad0: lwc1 $f0, 4($a0)
label_0x1a4ad4:
    goto label_0x1a4b18;                                        // 0x001a4ad4: b 0x1a4b18
    FPU_F0 = *(float*)((a0) + 8);  // Load float                // 0x001a4ad8: lwc1 $f0, 8($a0)
label_0x1a4adc:
    /* move to FPU: $zero, $f0 */                               // 0x001a4adc: mtc1 $zero, $f0
    goto label_0x1a4b18;                                        // 0x001a4ae0: b 0x1a4b18
    /* nop */                                                   // 0x001a4ae4: nop 
label_0x1a4ae8:
    v0 = *(int16_t*)((a0) + 2);                                 // 0x001a4ae8: lh $v0, 2($a0)
    /* move to FPU: $v0, $f0 */                                 // 0x001a4aec: mtc1 $v0, $f0
    goto label_0x1a4b18;                                        // 0x001a4af0: b 0x1a4b18
    /* FPU: cvt.s.w $f0, $f0 */                                 // 0x001a4af4: cvt.s.w $f0, $f0
label_0x1a4af8:
    v0 = *(int16_t*)((a0) + 2);                                 // 0x001a4af8: lh $v0, 2($a0)
    /* move to FPU: $v0, $f0 */                                 // 0x001a4afc: mtc1 $v0, $f0
    goto label_0x1a4b18;                                        // 0x001a4b00: b 0x1a4b18
    /* FPU: cvt.s.w $f0, $f0 */                                 // 0x001a4b04: cvt.s.w $f0, $f0
label_0x1a4b08:
    v0 = *(int16_t*)((a0) + 6);                                 // 0x001a4b08: lh $v0, 6($a0)
    /* move to FPU: $v0, $f0 */                                 // 0x001a4b0c: mtc1 $v0, $f0
    /* nop */                                                   // 0x001a4b10: nop 
    /* FPU: cvt.s.w $f0, $f0 */                                 // 0x001a4b14: cvt.s.w $f0, $f0
label_0x1a4b18:
    return;                                                     // 0x001a4b18: jr $ra
    /* nop */                                                   // 0x001a4b1c: nop 
}