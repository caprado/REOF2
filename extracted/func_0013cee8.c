void func_0013cee8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0013cee8: addiu $sp, $sp, -0x10
    if (a0 != 0) goto label_0x13cf08;                           // 0x0013ceec: bnez $a0, 0x13cf08
    a0 = 0x22 << 16;                                            // 0x0013cef4: lui $a0, 0x22
    func_0013d248();  // 0x13d1b8                                // 0x0013cef8: jal 0x13d1b8
    a0 = &str_00225be8;  // "E0011: Illigal parameter fname=%s\n" // 0x0013cefc: addiu $a0, $a0, 0x5be8
    goto label_0x13cf70;                                        // 0x0013cf00: b 0x13cf70
    v0 = -1;                                                    // 0x0013cf04: addiu $v0, $zero, -1
label_0x13cf08:
    a2 = a0 + 0x38;                                             // 0x0013cf08: addiu $a2, $a0, 0x38
    v0 = g_00225c20;  // Global at 0x00225c20                   // 0x0013cf0c: lw $v0, 0($a2)
    if (v0 == a1) goto label_0x13cf44;                          // 0x0013cf10: beq $v0, $a1, 0x13cf44
    v1 = v1 + 1;                                                // 0x0013cf18: addiu $v1, $v1, 1
    /* nop */                                                   // 0x0013cf1c: nop 
label_0x13cf20:
    v0 = (v1 < 0x10) ? 1 : 0;                                   // 0x0013cf20: slti $v0, $v1, 0x10
    if (v0 == 0) goto label_0x13cf44;                           // 0x0013cf24: beqz $v0, 0x13cf44
    a2 = a2 + 0x20;                                             // 0x0013cf28: addiu $a2, $a2, 0x20
    v0 = g_00225c40;  // Global at 0x00225c40                   // 0x0013cf2c: lw $v0, 0($a2)
    /* nop */                                                   // 0x0013cf30: nop 
    /* nop */                                                   // 0x0013cf34: nop 
    /* nop */                                                   // 0x0013cf38: nop 
    if (v0 != a1) goto label_0x13cf20;                          // 0x0013cf3c: bnel $v0, $a1, 0x13cf20
    v1 = v1 + 1;                                                // 0x0013cf40: addiu $v1, $v1, 1
label_0x13cf44:
    v0 = 0x10;                                                  // 0x0013cf44: addiu $v0, $zero, 0x10
    if (v1 != v0) goto label_0x13cf68;                          // 0x0013cf48: bnel $v1, $v0, 0x13cf68
    v1 = v1 << 5;                                               // 0x0013cf4c: sll $v1, $v1, 5
    a0 = 0x22 << 16;                                            // 0x0013cf50: lui $a0, 0x22
    func_0013d248();  // 0x13d1b8                                // 0x0013cf54: jal 0x13d1b8
    a0 = &str_00225c58;  // "E0010: Illigal parameter min=%d\n" // 0x0013cf58: addiu $a0, $a0, 0x5c58
    goto label_0x13cf70;                                        // 0x0013cf5c: b 0x13cf70
    v0 = -1;                                                    // 0x0013cf60: addiu $v0, $zero, -1
    /* nop */                                                   // 0x0013cf64: nop 
label_0x13cf68:
    v1 = v1 + a0;                                               // 0x0013cf68: addu $v1, $v1, $a0
    v0 = *(int32_t*)((v1) + 0x50);                              // 0x0013cf6c: lw $v0, 0x50($v1)
label_0x13cf70:
    return;                                                     // 0x0013cf74: jr $ra
    sp = sp + 0x10;                                             // 0x0013cf78: addiu $sp, $sp, 0x10
}