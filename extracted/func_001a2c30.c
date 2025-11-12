void func_001a2c30() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001a2c30: addiu $sp, $sp, -0x20
    func_001a2ef0();  // 0x1a2e50                                // 0x001a2c44: jal 0x1a2e50
    a0 = *(int32_t*)(v0);                                       // 0x001a2c4c: lw $a0, 0($v0)
    v1 = 4;                                                     // 0x001a2c50: addiu $v1, $zero, 4
    if (a0 == v1) goto label_0x1a2c64;                          // 0x001a2c54: beq $a0, $v1, 0x1a2c64
    goto label_0x1a2cb8;                                        // 0x001a2c5c: b 0x1a2cb8
    v0 = -1;                                                    // 0x001a2c60: addiu $v0, $zero, -1
label_0x1a2c64:
    a1 = 0x10 << 16;                                            // 0x001a2c64: lui $a1, 0x10
    func_001a32e0();  // 0x1a3230                                // 0x001a2c68: jal 0x1a3230
    if (v0 != 0) goto label_0x1a2c80;                           // 0x001a2c70: bnez $v0, 0x1a2c80
    /* nop */                                                   // 0x001a2c74: nop 
    goto label_0x1a2cb8;                                        // 0x001a2c78: b 0x1a2cb8
    v0 = -1;                                                    // 0x001a2c7c: addiu $v0, $zero, -1
label_0x1a2c80:
    a0 = *(int32_t*)((v0) + 4);                                 // 0x001a2c80: lw $a0, 4($v0)
    a2 = v0 + 0xc;                                              // 0x001a2c84: addiu $a2, $v0, 0xc
    goto label_0x1a2cac;                                        // 0x001a2c8c: b 0x1a2cac
    *(uint16_t*)(s0) = a0;                                      // 0x001a2c90: sh $a0, 0($s0)
label_0x1a2c94:
    v1 = *(int32_t*)(a2);                                       // 0x001a2c94: lw $v1, 0($a2)
    v0 = a1 << 1;                                               // 0x001a2c98: sll $v0, $a1, 1
    v0 = s0 + v0;                                               // 0x001a2c9c: addu $v0, $s0, $v0
    a1 = a1 + 1;                                                // 0x001a2ca0: addiu $a1, $a1, 1
    *(uint16_t*)((v0) + 2) = v1;                                // 0x001a2ca4: sh $v1, 2($v0)
    a2 = a2 + 4;                                                // 0x001a2ca8: addiu $a2, $a2, 4
label_0x1a2cac:
    v0 = (a1 < a0) ? 1 : 0;                                     // 0x001a2cac: slt $v0, $a1, $a0
    if (v0 != 0) goto label_0x1a2c94;                           // 0x001a2cb0: bnez $v0, 0x1a2c94
label_0x1a2cb8:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001a2cbc: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001a2cc0: jr $ra
    sp = sp + 0x20;                                             // 0x001a2cc4: addiu $sp, $sp, 0x20
}