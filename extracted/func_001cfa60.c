void func_001cfa60() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001cfa60: addiu $sp, $sp, -0x10
    v0 = 3;                                                     // 0x001cfa64: addiu $v0, $zero, 3
    v1 = *(int32_t*)(a0);                                       // 0x001cfa6c: lw $v1, 0($a0)
    if (v1 == v0) goto label_0x1cfa80;                          // 0x001cfa70: beq $v1, $v0, 0x1cfa80
    goto label_0x1cfa94;                                        // 0x001cfa78: b 0x1cfa94
label_0x1cfa80:
    a1 = *(int32_t*)((a2) + 0xc);                               // 0x001cfa80: lw $a1, 0xc($a2)
    func_001ccc00();  // 1ccc00                                // 0x001cfa84: jal 0x1ccc00
    a0 = *(int32_t*)((a2) + 8);                                 // 0x001cfa88: lw $a0, 8($a2)
    v0 = 1;                                                     // 0x001cfa8c: addiu $v0, $zero, 1
label_0x1cfa94:
    return;                                                     // 0x001cfa94: jr $ra
    sp = sp + 0x10;                                             // 0x001cfa98: addiu $sp, $sp, 0x10
}