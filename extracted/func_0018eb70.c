void func_0018eb70() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = *(int32_t*)((a0) + 4);                                 // 0x0018eb70: lw $v1, 4($a0)
    v0 = *(int32_t*)((gp) + -0x64e0);                           // 0x0018eb74: lw $v0, -0x64e0($gp)
    *(uint32_t*)(a1) = 0;                                       // 0x0018eb78: sw $zero, 0($a1)
    t0 = v1 + v0;                                               // 0x0018eb7c: addu $t0, $v1, $v0
    *(uint32_t*)(a2) = 0;                                       // 0x0018eb80: sw $zero, 0($a2)
    v0 = *(int16_t*)((t0) + 2);                                 // 0x0018eb84: lh $v0, 2($t0)
    /* move to FPU: $v0, $f0 */                                 // 0x0018eb88: mtc1 $v0, $f0
    /* nop */                                                   // 0x0018eb8c: nop 
    /* FPU: cvt.s.w $f0, $f0 */                                 // 0x0018eb90: cvt.s.w $f0, $f0
    /* FPU: c.ole.s $f12, $f0 */                                // 0x0018eb94: c.ole.s $f12, $f0
    /* bc1t 0x18ebb0 */                                         // 0x0018eb98: bc1t 0x18ebb0
    /* nop */                                                   // 0x0018eb9c: nop 
    v1 = *(uint16_t*)((a0) + 2);                                // 0x0018eba0: lhu $v1, 2($a0)
    v0 = 1;                                                     // 0x0018eba4: addiu $v0, $zero, 1
    if (v1 != v0) goto label_0x18ebc0;                          // 0x0018eba8: bne $v1, $v0, 0x18ebc0
    v0 = v1 << 2;                                               // 0x0018ebac: sll $v0, $v1, 2
    *(uint32_t*)(a1) = t0;                                      // 0x0018ebb0: sw $t0, 0($a1)
    goto label_0x18ecec;                                        // 0x0018ebb8: b 0x18ecec
    *(uint32_t*)(a2) = 0;                                       // 0x0018ebbc: sw $zero, 0($a2)
label_0x18ebc0:
    v0 = v0 + t0;                                               // 0x0018ebc0: addu $v0, $v0, $t0
    v0 = *(int16_t*)((v0) + -2);                                // 0x0018ebc4: lh $v0, -2($v0)
    /* move to FPU: $v0, $f0 */                                 // 0x0018ebc8: mtc1 $v0, $f0
    /* nop */                                                   // 0x0018ebcc: nop 
    /* FPU: cvt.s.w $f0, $f0 */                                 // 0x0018ebd0: cvt.s.w $f0, $f0
    /* FPU: c.olt.s $f12, $f0 */                                // 0x0018ebd4: c.olt.s $f12, $f0
    /* bc1t 0x18ec08 */                                         // 0x0018ebd8: bc1t 0x18ec08
    /* nop */                                                   // 0x0018ebdc: nop 
    v0 = v1 + -1;                                               // 0x0018ebe0: addiu $v0, $v1, -1
    v0 = v0 << 2;                                               // 0x0018ebe4: sll $v0, $v0, 2
    v0 = t0 + v0;                                               // 0x0018ebe8: addu $v0, $t0, $v0
    *(uint32_t*)(a1) = v0;                                      // 0x0018ebec: sw $v0, 0($a1)
    *(uint32_t*)(a2) = 0;                                       // 0x0018ebf0: sw $zero, 0($a2)
    v0 = *(uint16_t*)((a0) + 2);                                // 0x0018ebf4: lhu $v0, 2($a0)
    v0 = v0 + -1;                                               // 0x0018ebf8: addiu $v0, $v0, -1
    goto label_0x18ecec;                                        // 0x0018ec00: b 0x18ecec
    if (v0 >= 0) goto label_0x18ec20;                           // 0x0018ec10: bgez $v0, 0x18ec20
    /* nop */                                                   // 0x0018ec14: nop 
    goto label_0x18ec38;                                        // 0x0018ec18: b 0x18ec38
label_0x18ec20:
    v0 = (v0 < v1) ? 1 : 0;                                     // 0x0018ec20: slt $v0, $v0, $v1
    if (v0 != 0) goto label_0x18ec38;                           // 0x0018ec24: bnez $v0, 0x18ec38
    /* nop */                                                   // 0x0018ec28: nop 
    v0 = v1 + -1;                                               // 0x0018ec2c: addiu $v0, $v1, -1
label_0x18ec38:
    v0 = v0 << 2;                                               // 0x0018ec40: sll $v0, $v0, 2
    t0 = t0 + v0;                                               // 0x0018ec44: addu $t0, $t0, $v0
label_0x18ec48:
    v1 = *(int16_t*)((t0) + 2);                                 // 0x0018ec48: lh $v1, 2($t0)
    /* move to FPU: $v1, $f0 */                                 // 0x0018ec4c: mtc1 $v1, $f0
    /* nop */                                                   // 0x0018ec50: nop 
    /* FPU: cvt.s.w $f0, $f0 */                                 // 0x0018ec54: cvt.s.w $f0, $f0
    /* FPU: c.eq.s $f0, $f12 */                                 // 0x0018ec58: c.eq.s $f0, $f12
    /* bc1f 0x18ec74 */                                         // 0x0018ec5c: bc1f 0x18ec74
    /* nop */                                                   // 0x0018ec60: nop 
    *(uint32_t*)(a1) = t0;                                      // 0x0018ec64: sw $t0, 0($a1)
    goto label_0x18ecec;                                        // 0x0018ec6c: b 0x18ecec
    *(uint32_t*)(a2) = 0;                                       // 0x0018ec70: sw $zero, 0($a2)
    /* FPU: c.olt.s $f0, $f12 */                                // 0x0018ec74: c.olt.s $f0, $f12
    /* bc1f 0x18ecb0 */                                         // 0x0018ec78: bc1f 0x18ecb0
    /* nop */                                                   // 0x0018ec7c: nop 
    v0 = *(int16_t*)((t0) + 6);                                 // 0x0018ec80: lh $v0, 6($t0)
    /* move to FPU: $v0, $f0 */                                 // 0x0018ec84: mtc1 $v0, $f0
    /* nop */                                                   // 0x0018ec88: nop 
    /* FPU: cvt.s.w $f0, $f0 */                                 // 0x0018ec8c: cvt.s.w $f0, $f0
    /* FPU: c.olt.s $f12, $f0 */                                // 0x0018ec90: c.olt.s $f12, $f0
    /* bc1f 0x18ecb0 */                                         // 0x0018ec94: bc1f 0x18ecb0
    /* nop */                                                   // 0x0018ec98: nop 
    *(uint32_t*)(a1) = t0;                                      // 0x0018ec9c: sw $t0, 0($a1)
    v0 = t0 + 4;                                                // 0x0018eca0: addiu $v0, $t0, 4
    *(uint32_t*)(a2) = v0;                                      // 0x0018eca4: sw $v0, 0($a2)
    goto label_0x18ecec;                                        // 0x0018eca8: b 0x18ecec
    /* move to FPU: $v1, $f0 */                                 // 0x0018ecb0: mtc1 $v1, $f0
    /* nop */                                                   // 0x0018ecb4: nop 
    /* FPU: cvt.s.w $f0, $f0 */                                 // 0x0018ecb8: cvt.s.w $f0, $f0
    /* FPU: c.olt.s $f12, $f0 */                                // 0x0018ecbc: c.olt.s $f12, $f0
    /* bc1f 0x18ecdc */                                         // 0x0018ecc0: bc1f 0x18ecdc
    v0 = a3 + 1;                                                // 0x0018ecc4: addiu $v0, $a3, 1
    v0 = a3 + -1;                                               // 0x0018ecc8: addiu $v0, $a3, -1
    t0 = t0 + -4;                                               // 0x0018eccc: addiu $t0, $t0, -4
    goto label_0x18ec48;                                        // 0x0018ecd4: b 0x18ec48
    t0 = t0 + 4;                                                // 0x0018ecdc: addiu $t0, $t0, 4
    goto label_0x18ec48;                                        // 0x0018ece4: b 0x18ec48
label_0x18ecec:
    return;                                                     // 0x0018ecec: jr $ra
    /* nop */                                                   // 0x0018ecf0: nop 
}