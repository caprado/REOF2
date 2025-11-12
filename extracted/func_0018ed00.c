void func_0018ed00() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = *(int32_t*)((a0) + 4);                                 // 0x0018ed00: lw $v1, 4($a0)
    v0 = *(int32_t*)((gp) + -0x64e0);                           // 0x0018ed04: lw $v0, -0x64e0($gp)
    *(uint32_t*)(a1) = 0;                                       // 0x0018ed08: sw $zero, 0($a1)
    t0 = v1 + v0;                                               // 0x0018ed0c: addu $t0, $v1, $v0
    *(uint32_t*)(a2) = 0;                                       // 0x0018ed10: sw $zero, 0($a2)
    v0 = *(int16_t*)((t0) + 2);                                 // 0x0018ed14: lh $v0, 2($t0)
    /* move to FPU: $v0, $f0 */                                 // 0x0018ed18: mtc1 $v0, $f0
    /* nop */                                                   // 0x0018ed1c: nop 
    /* FPU: cvt.s.w $f0, $f0 */                                 // 0x0018ed20: cvt.s.w $f0, $f0
    /* FPU: c.ole.s $f12, $f0 */                                // 0x0018ed24: c.ole.s $f12, $f0
    /* bc1t 0x18ed40 */                                         // 0x0018ed28: bc1t 0x18ed40
    /* nop */                                                   // 0x0018ed2c: nop 
    v1 = *(uint16_t*)((a0) + 2);                                // 0x0018ed30: lhu $v1, 2($a0)
    v0 = 1;                                                     // 0x0018ed34: addiu $v0, $zero, 1
    if (v1 != v0) goto label_0x18ed50;                          // 0x0018ed38: bne $v1, $v0, 0x18ed50
    v0 = v1 << 3;                                               // 0x0018ed3c: sll $v0, $v1, 3
    *(uint32_t*)(a1) = t0;                                      // 0x0018ed40: sw $t0, 0($a1)
    goto label_0x18ee7c;                                        // 0x0018ed48: b 0x18ee7c
    *(uint32_t*)(a2) = 0;                                       // 0x0018ed4c: sw $zero, 0($a2)
label_0x18ed50:
    v0 = v0 + t0;                                               // 0x0018ed50: addu $v0, $v0, $t0
    v0 = *(int16_t*)((v0) + -6);                                // 0x0018ed54: lh $v0, -6($v0)
    /* move to FPU: $v0, $f0 */                                 // 0x0018ed58: mtc1 $v0, $f0
    /* nop */                                                   // 0x0018ed5c: nop 
    /* FPU: cvt.s.w $f0, $f0 */                                 // 0x0018ed60: cvt.s.w $f0, $f0
    /* FPU: c.olt.s $f12, $f0 */                                // 0x0018ed64: c.olt.s $f12, $f0
    /* bc1t 0x18ed98 */                                         // 0x0018ed68: bc1t 0x18ed98
    /* nop */                                                   // 0x0018ed6c: nop 
    v0 = v1 + -1;                                               // 0x0018ed70: addiu $v0, $v1, -1
    v0 = v0 << 3;                                               // 0x0018ed74: sll $v0, $v0, 3
    v0 = t0 + v0;                                               // 0x0018ed78: addu $v0, $t0, $v0
    *(uint32_t*)(a1) = v0;                                      // 0x0018ed7c: sw $v0, 0($a1)
    *(uint32_t*)(a2) = 0;                                       // 0x0018ed80: sw $zero, 0($a2)
    v0 = *(uint16_t*)((a0) + 2);                                // 0x0018ed84: lhu $v0, 2($a0)
    v0 = v0 + -1;                                               // 0x0018ed88: addiu $v0, $v0, -1
    goto label_0x18ee7c;                                        // 0x0018ed90: b 0x18ee7c
    if (v0 >= 0) goto label_0x18edb0;                           // 0x0018eda0: bgez $v0, 0x18edb0
    /* nop */                                                   // 0x0018eda4: nop 
    goto label_0x18edc8;                                        // 0x0018eda8: b 0x18edc8
label_0x18edb0:
    v0 = (v0 < v1) ? 1 : 0;                                     // 0x0018edb0: slt $v0, $v0, $v1
    if (v0 != 0) goto label_0x18edc8;                           // 0x0018edb4: bnez $v0, 0x18edc8
    /* nop */                                                   // 0x0018edb8: nop 
    v0 = v1 + -1;                                               // 0x0018edbc: addiu $v0, $v1, -1
label_0x18edc8:
    v0 = v0 << 3;                                               // 0x0018edd0: sll $v0, $v0, 3
    t0 = t0 + v0;                                               // 0x0018edd4: addu $t0, $t0, $v0
label_0x18edd8:
    v1 = *(int16_t*)((t0) + 2);                                 // 0x0018edd8: lh $v1, 2($t0)
    /* move to FPU: $v1, $f0 */                                 // 0x0018eddc: mtc1 $v1, $f0
    /* nop */                                                   // 0x0018ede0: nop 
    /* FPU: cvt.s.w $f0, $f0 */                                 // 0x0018ede4: cvt.s.w $f0, $f0
    /* FPU: c.eq.s $f0, $f12 */                                 // 0x0018ede8: c.eq.s $f0, $f12
    /* bc1f 0x18ee04 */                                         // 0x0018edec: bc1f 0x18ee04
    /* nop */                                                   // 0x0018edf0: nop 
    *(uint32_t*)(a1) = t0;                                      // 0x0018edf4: sw $t0, 0($a1)
    goto label_0x18ee7c;                                        // 0x0018edfc: b 0x18ee7c
    *(uint32_t*)(a2) = 0;                                       // 0x0018ee00: sw $zero, 0($a2)
    /* FPU: c.olt.s $f0, $f12 */                                // 0x0018ee04: c.olt.s $f0, $f12
    /* bc1f 0x18ee40 */                                         // 0x0018ee08: bc1f 0x18ee40
    /* nop */                                                   // 0x0018ee0c: nop 
    v0 = *(int16_t*)((t0) + 0xa);                               // 0x0018ee10: lh $v0, 0xa($t0)
    /* move to FPU: $v0, $f0 */                                 // 0x0018ee14: mtc1 $v0, $f0
    /* nop */                                                   // 0x0018ee18: nop 
    /* FPU: cvt.s.w $f0, $f0 */                                 // 0x0018ee1c: cvt.s.w $f0, $f0
    /* FPU: c.olt.s $f12, $f0 */                                // 0x0018ee20: c.olt.s $f12, $f0
    /* bc1f 0x18ee40 */                                         // 0x0018ee24: bc1f 0x18ee40
    /* nop */                                                   // 0x0018ee28: nop 
    *(uint32_t*)(a1) = t0;                                      // 0x0018ee2c: sw $t0, 0($a1)
    v0 = t0 + 8;                                                // 0x0018ee30: addiu $v0, $t0, 8
    *(uint32_t*)(a2) = v0;                                      // 0x0018ee34: sw $v0, 0($a2)
    goto label_0x18ee7c;                                        // 0x0018ee38: b 0x18ee7c
    /* move to FPU: $v1, $f0 */                                 // 0x0018ee40: mtc1 $v1, $f0
    /* nop */                                                   // 0x0018ee44: nop 
    /* FPU: cvt.s.w $f0, $f0 */                                 // 0x0018ee48: cvt.s.w $f0, $f0
    /* FPU: c.olt.s $f12, $f0 */                                // 0x0018ee4c: c.olt.s $f12, $f0
    /* bc1f 0x18ee6c */                                         // 0x0018ee50: bc1f 0x18ee6c
    v0 = a3 + 1;                                                // 0x0018ee54: addiu $v0, $a3, 1
    v0 = a3 + -1;                                               // 0x0018ee58: addiu $v0, $a3, -1
    t0 = t0 + -8;                                               // 0x0018ee5c: addiu $t0, $t0, -8
    goto label_0x18edd8;                                        // 0x0018ee64: b 0x18edd8
    t0 = t0 + 8;                                                // 0x0018ee6c: addiu $t0, $t0, 8
    goto label_0x18edd8;                                        // 0x0018ee74: b 0x18edd8
label_0x18ee7c:
    return;                                                     // 0x0018ee7c: jr $ra
    /* nop */                                                   // 0x0018ee80: nop 
}