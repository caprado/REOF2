void func_001cfa00() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001cfa00: addiu $sp, $sp, -0x10
    v0 = 3;                                                     // 0x001cfa04: addiu $v0, $zero, 3
    v1 = *(int32_t*)(a0);                                       // 0x001cfa0c: lw $v1, 0($a0)
    if (v1 != v0) goto label_0x1cfa48;                          // 0x001cfa10: bne $v1, $v0, 0x1cfa48
    v0 = 3;                                                     // 0x001cfa14: addiu $v0, $zero, 3
    func_001cc120();  // 0x1cc110                                // 0x001cfa18: jal 0x1cc110
    /* nop */                                                   // 0x001cfa1c: nop 
    v1 = 1;                                                     // 0x001cfa20: addiu $v1, $zero, 1
    if (v0 == v1) goto label_0x1cfa44;                          // 0x001cfa24: beq $v0, $v1, 0x1cfa44
    a0 = 0x2bc;                                                 // 0x001cfa28: addiu $a0, $zero, 0x2bc
    func_001ccc00();  // 0x1ccb80                                // 0x001cfa2c: jal 0x1ccb80
    /* nop */                                                   // 0x001cfa30: nop 
    if (v0 == 0) goto label_0x1cfa44;                           // 0x001cfa34: beqz $v0, 0x1cfa44
    /* nop */                                                   // 0x001cfa38: nop 
    goto label_0x1cfa48;                                        // 0x001cfa3c: b 0x1cfa48
    v0 = 1;                                                     // 0x001cfa40: addiu $v0, $zero, 1
label_0x1cfa44:
    v0 = 3;                                                     // 0x001cfa44: addiu $v0, $zero, 3
label_0x1cfa48:
    return;                                                     // 0x001cfa4c: jr $ra
    sp = sp + 0x10;                                             // 0x001cfa50: addiu $sp, $sp, 0x10
}