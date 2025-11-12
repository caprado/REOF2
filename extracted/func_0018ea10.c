void func_0018ea10() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = *(int32_t*)((a0) + 4);                                 // 0x0018ea10: lw $v1, 4($a0)
    v0 = *(int32_t*)((gp) + -0x64e0);                           // 0x0018ea14: lw $v0, -0x64e0($gp)
    *(uint32_t*)(a1) = 0;                                       // 0x0018ea18: sw $zero, 0($a1)
    t0 = v1 + v0;                                               // 0x0018ea1c: addu $t0, $v1, $v0
    *(uint32_t*)(a2) = 0;                                       // 0x0018ea20: sw $zero, 0($a2)
    FPU_F0 = *(float*)((t0) + 8);  // Load float                // 0x0018ea24: lwc1 $f0, 8($t0)
    /* FPU: c.ole.s $f12, $f0 */                                // 0x0018ea28: c.ole.s $f12, $f0
    /* bc1t 0x18ea44 */                                         // 0x0018ea2c: bc1t 0x18ea44
    /* nop */                                                   // 0x0018ea30: nop 
    v1 = *(uint16_t*)((a0) + 2);                                // 0x0018ea34: lhu $v1, 2($a0)
    v0 = 1;                                                     // 0x0018ea38: addiu $v0, $zero, 1
    if (v1 != v0) goto label_0x18ea54;                          // 0x0018ea3c: bne $v1, $v0, 0x18ea54
    v0 = v1 << 2;                                               // 0x0018ea40: sll $v0, $v1, 2
    *(uint32_t*)(a1) = t0;                                      // 0x0018ea44: sw $t0, 0($a1)
    goto label_0x18eb68;                                        // 0x0018ea4c: b 0x18eb68
    *(uint32_t*)(a2) = 0;                                       // 0x0018ea50: sw $zero, 0($a2)
label_0x18ea54:
    v0 = v0 + v1;                                               // 0x0018ea54: addu $v0, $v0, $v1
    v0 = v0 << 2;                                               // 0x0018ea58: sll $v0, $v0, 2
    v0 = v0 + t0;                                               // 0x0018ea5c: addu $v0, $v0, $t0
    FPU_F0 = *(float*)((v0) + -0xc);  // Load float             // 0x0018ea60: lwc1 $f0, -0xc($v0)
    /* FPU: c.olt.s $f12, $f0 */                                // 0x0018ea64: c.olt.s $f12, $f0
    /* bc1t 0x18eaa0 */                                         // 0x0018ea68: bc1t 0x18eaa0
    /* nop */                                                   // 0x0018ea6c: nop 
    v1 = v1 + -1;                                               // 0x0018ea70: addiu $v1, $v1, -1
    v0 = v1 << 2;                                               // 0x0018ea74: sll $v0, $v1, 2
    v0 = v0 + v1;                                               // 0x0018ea78: addu $v0, $v0, $v1
    v0 = v0 << 2;                                               // 0x0018ea7c: sll $v0, $v0, 2
    v0 = t0 + v0;                                               // 0x0018ea80: addu $v0, $t0, $v0
    *(uint32_t*)(a1) = v0;                                      // 0x0018ea84: sw $v0, 0($a1)
    *(uint32_t*)(a2) = 0;                                       // 0x0018ea88: sw $zero, 0($a2)
    v0 = *(uint16_t*)((a0) + 2);                                // 0x0018ea8c: lhu $v0, 2($a0)
    v0 = v0 + -1;                                               // 0x0018ea90: addiu $v0, $v0, -1
    goto label_0x18eb68;                                        // 0x0018ea98: b 0x18eb68
    if (v0 >= 0) goto label_0x18eab8;                           // 0x0018eaa8: bgez $v0, 0x18eab8
    /* nop */                                                   // 0x0018eaac: nop 
    goto label_0x18ead0;                                        // 0x0018eab0: b 0x18ead0
label_0x18eab8:
    v0 = (v0 < v1) ? 1 : 0;                                     // 0x0018eab8: slt $v0, $v0, $v1
    if (v0 != 0) goto label_0x18ead0;                           // 0x0018eabc: bnez $v0, 0x18ead0
    /* nop */                                                   // 0x0018eac0: nop 
    v0 = v1 + -1;                                               // 0x0018eac4: addiu $v0, $v1, -1
label_0x18ead0:
    v0 = v1 << 2;                                               // 0x0018ead8: sll $v0, $v1, 2
    v0 = v0 + v1;                                               // 0x0018eadc: addu $v0, $v0, $v1
    v0 = v0 << 2;                                               // 0x0018eae0: sll $v0, $v0, 2
    t0 = t0 + v0;                                               // 0x0018eae4: addu $t0, $t0, $v0
label_0x18eae8:
    FPU_F1 = *(float*)((t0) + 8);  // Load float                // 0x0018eae8: lwc1 $f1, 8($t0)
    /* FPU: c.eq.s $f1, $f12 */                                 // 0x0018eaec: c.eq.s $f1, $f12
    /* bc1f 0x18eb08 */                                         // 0x0018eaf0: bc1f 0x18eb08
    /* nop */                                                   // 0x0018eaf4: nop 
    *(uint32_t*)(a1) = t0;                                      // 0x0018eaf8: sw $t0, 0($a1)
    goto label_0x18eb68;                                        // 0x0018eb00: b 0x18eb68
    *(uint32_t*)(a2) = 0;                                       // 0x0018eb04: sw $zero, 0($a2)
    /* FPU: c.olt.s $f1, $f12 */                                // 0x0018eb08: c.olt.s $f1, $f12
    /* bc1f 0x18eb38 */                                         // 0x0018eb0c: bc1f 0x18eb38
    /* nop */                                                   // 0x0018eb10: nop 
    FPU_F0 = *(float*)((t0) + 0x1c);  // Load float             // 0x0018eb14: lwc1 $f0, 0x1c($t0)
    /* FPU: c.olt.s $f12, $f0 */                                // 0x0018eb18: c.olt.s $f12, $f0
    /* bc1f 0x18eb38 */                                         // 0x0018eb1c: bc1f 0x18eb38
    /* nop */                                                   // 0x0018eb20: nop 
    *(uint32_t*)(a1) = t0;                                      // 0x0018eb24: sw $t0, 0($a1)
    v0 = t0 + 0x14;                                             // 0x0018eb28: addiu $v0, $t0, 0x14
    *(uint32_t*)(a2) = v0;                                      // 0x0018eb2c: sw $v0, 0($a2)
    goto label_0x18eb68;                                        // 0x0018eb30: b 0x18eb68
    /* FPU: c.olt.s $f12, $f1 */                                // 0x0018eb38: c.olt.s $f12, $f1
    /* bc1f 0x18eb58 */                                         // 0x0018eb3c: bc1f 0x18eb58
    v0 = a3 + 1;                                                // 0x0018eb40: addiu $v0, $a3, 1
    v0 = a3 + -1;                                               // 0x0018eb44: addiu $v0, $a3, -1
    t0 = t0 + -0x14;                                            // 0x0018eb48: addiu $t0, $t0, -0x14
    goto label_0x18eae8;                                        // 0x0018eb50: b 0x18eae8
    t0 = t0 + 0x14;                                             // 0x0018eb58: addiu $t0, $t0, 0x14
    goto label_0x18eae8;                                        // 0x0018eb60: b 0x18eae8
label_0x18eb68:
    return;                                                     // 0x0018eb68: jr $ra
    /* nop */                                                   // 0x0018eb6c: nop 
}