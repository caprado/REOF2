void func_0013add0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0013add0: addiu $sp, $sp, -0x10
    v0 = *(int32_t*)((s0) + 0x2c);                              // 0x0013ade0: lw $v0, 0x2c($s0)
    /* beqzl $v0, 0x13ae88 */                                   // 0x0013ade4: beqzl $v0, 0x13ae88
    func_001413d8();  // 0x1413c0                                // 0x0013adec: jal 0x1413c0
    /* nop */                                                   // 0x0013adf0: nop 
    func_001372d0();  // 0x1372c8                                // 0x0013adf4: jal 0x1372c8
    a0 = *(int32_t*)((s0) + 0x2c);                              // 0x0013adf8: lw $a0, 0x2c($s0)
    v0 = ((unsigned)v1 < (unsigned)0xa) ? 1 : 0;                // 0x0013ae00: sltiu $v0, $v1, 0xa
    /* beqzl $v0, 0x13ae78 */                                   // 0x0013ae04: beqzl $v0, 0x13ae78
    v0 = v1 << 2;                                               // 0x0013ae0c: sll $v0, $v1, 2
    v1 = 0x22 << 16;                                            // 0x0013ae10: lui $v1, 0x22
    v1 = v1 + v0;                                               // 0x0013ae14: addu $v1, $v1, $v0
    v1 = g_002256b0;  // Global at 0x002256b0                   // 0x0013ae18: lw $v1, 0x56b0($v1)
    /* jump to address in v1 */                                 // 0x0013ae1c: jr $v1
    /* nop */                                                   // 0x0013ae20: nop 
    /* nop */                                                   // 0x0013ae24: nop 
    v0 = 3;                                                     // 0x0013ae28: addiu $v0, $zero, 3
    a0 = *(int32_t*)((s0) + 0x2c);                              // 0x0013ae2c: lw $a0, 0x2c($s0)
    goto label_0x13ae68;                                        // 0x0013ae30: b 0x13ae68
    *(uint8_t*)((s0) + 2) = v0;                                 // 0x0013ae34: sb $v0, 2($s0)
    a0 = *(int32_t*)((s0) + 0x24);                              // 0x0013ae38: lw $a0, 0x24($s0)
    v1 = 1;                                                     // 0x0013ae3c: addiu $v1, $zero, 1
    v0 = *(int32_t*)((s0) + 0x1c);                              // 0x0013ae40: lw $v0, 0x1c($s0)
    *(uint32_t*)((s0) + 0x28) = a0;                             // 0x0013ae44: sw $a0, 0x28($s0)
    v0 = v0 + a0;                                               // 0x0013ae48: addu $v0, $v0, $a0
    a0 = *(int32_t*)((s0) + 0x2c);                              // 0x0013ae4c: lw $a0, 0x2c($s0)
    *(uint8_t*)((s0) + 2) = v1;                                 // 0x0013ae50: sb $v1, 2($s0)
    goto label_0x13ae68;                                        // 0x0013ae54: b 0x13ae68
    *(uint32_t*)((s0) + 0x1c) = v0;                             // 0x0013ae58: sw $v0, 0x1c($s0)
    /* nop */                                                   // 0x0013ae5c: nop 
    *(uint8_t*)((s0) + 2) = 0;                                  // 0x0013ae60: sb $zero, 2($s0)
    a0 = *(int32_t*)((s0) + 0x2c);                              // 0x0013ae64: lw $a0, 0x2c($s0)
label_0x13ae68:
    func_00137128();  // 0x137088                                // 0x0013ae68: jal 0x137088
    /* nop */                                                   // 0x0013ae6c: nop 
    *(uint32_t*)((s0) + 0x2c) = 0;                              // 0x0013ae70: sw $zero, 0x2c($s0)
    return func_00141450();  // Tail call                        // 0x0013ae7c: j 0x141438
    sp = sp + 0x10;                                             // 0x0013ae80: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0013ae84: nop 
    return;                                                     // 0x0013ae8c: jr $ra
    sp = sp + 0x10;                                             // 0x0013ae90: addiu $sp, $sp, 0x10
}