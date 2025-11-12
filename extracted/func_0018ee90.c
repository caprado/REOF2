void func_0018ee90() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = *(int32_t*)((a0) + 4);                                 // 0x0018ee90: lw $v1, 4($a0)
    v0 = *(int32_t*)((gp) + -0x64e0);                           // 0x0018ee94: lw $v0, -0x64e0($gp)
    *(uint32_t*)(a1) = 0;                                       // 0x0018ee98: sw $zero, 0($a1)
    v0 = v1 + v0;                                               // 0x0018ee9c: addu $v0, $v1, $v0
    *(uint32_t*)(a2) = 0;                                       // 0x0018eea0: sw $zero, 0($a2)
    v1 = *(int16_t*)((v0) + 6);                                 // 0x0018eea4: lh $v1, 6($v0)
    /* move to FPU: $v1, $f0 */                                 // 0x0018eea8: mtc1 $v1, $f0
    /* nop */                                                   // 0x0018eeac: nop 
    /* FPU: cvt.s.w $f0, $f0 */                                 // 0x0018eeb0: cvt.s.w $f0, $f0
    /* FPU: c.ole.s $f12, $f0 */                                // 0x0018eeb4: c.ole.s $f12, $f0
    /* bc1t 0x18eed0 */                                         // 0x0018eeb8: bc1t 0x18eed0
    /* nop */                                                   // 0x0018eebc: nop 
    t0 = *(uint16_t*)((a0) + 2);                                // 0x0018eec0: lhu $t0, 2($a0)
    v1 = 1;                                                     // 0x0018eec4: addiu $v1, $zero, 1
    if (t0 != v1) goto label_0x18eee0;                          // 0x0018eec8: bne $t0, $v1, 0x18eee0
    v1 = t0 << 1;                                               // 0x0018eecc: sll $v1, $t0, 1
    *(uint32_t*)(a1) = v0;                                      // 0x0018eed0: sw $v0, 0($a1)
    goto label_0x18f024;                                        // 0x0018eed8: b 0x18f024
    *(uint32_t*)(a2) = 0;                                       // 0x0018eedc: sw $zero, 0($a2)
label_0x18eee0:
    v1 = v1 + t0;                                               // 0x0018eee0: addu $v1, $v1, $t0
    v1 = v1 << 2;                                               // 0x0018eee4: sll $v1, $v1, 2
    v1 = v1 + v0;                                               // 0x0018eee8: addu $v1, $v1, $v0
    v1 = *(int16_t*)((v1) + -6);                                // 0x0018eeec: lh $v1, -6($v1)
    /* move to FPU: $v1, $f0 */                                 // 0x0018eef0: mtc1 $v1, $f0
    /* nop */                                                   // 0x0018eef4: nop 
    /* FPU: cvt.s.w $f0, $f0 */                                 // 0x0018eef8: cvt.s.w $f0, $f0
    /* FPU: c.olt.s $f12, $f0 */                                // 0x0018eefc: c.olt.s $f12, $f0
    /* bc1t 0x18ef38 */                                         // 0x0018ef00: bc1t 0x18ef38
    /* nop */                                                   // 0x0018ef04: nop 
    a3 = t0 + -1;                                               // 0x0018ef08: addiu $a3, $t0, -1
    v1 = a3 << 1;                                               // 0x0018ef0c: sll $v1, $a3, 1
    v1 = v1 + a3;                                               // 0x0018ef10: addu $v1, $v1, $a3
    v1 = v1 << 2;                                               // 0x0018ef14: sll $v1, $v1, 2
    v0 = v0 + v1;                                               // 0x0018ef18: addu $v0, $v0, $v1
    *(uint32_t*)(a1) = v0;                                      // 0x0018ef1c: sw $v0, 0($a1)
    *(uint32_t*)(a2) = 0;                                       // 0x0018ef20: sw $zero, 0($a2)
    v0 = *(uint16_t*)((a0) + 2);                                // 0x0018ef24: lhu $v0, 2($a0)
    v0 = v0 + -1;                                               // 0x0018ef28: addiu $v0, $v0, -1
    goto label_0x18f024;                                        // 0x0018ef30: b 0x18f024
    if (v1 >= 0) goto label_0x18ef50;                           // 0x0018ef40: bgez $v1, 0x18ef50
    /* nop */                                                   // 0x0018ef44: nop 
    goto label_0x18ef68;                                        // 0x0018ef48: b 0x18ef68
label_0x18ef50:
    v1 = (v1 < t0) ? 1 : 0;                                     // 0x0018ef50: slt $v1, $v1, $t0
    if (v1 != 0) goto label_0x18ef6c;                           // 0x0018ef54: bnez $v1, 0x18ef6c
    v1 = t0 + -1;                                               // 0x0018ef5c: addiu $v1, $t0, -1
label_0x18ef68:
label_0x18ef6c:
    v1 = a0 << 1;                                               // 0x0018ef70: sll $v1, $a0, 1
    v1 = v1 + a0;                                               // 0x0018ef74: addu $v1, $v1, $a0
    v1 = v1 << 2;                                               // 0x0018ef78: sll $v1, $v1, 2
    v0 = v0 + v1;                                               // 0x0018ef7c: addu $v0, $v0, $v1
label_0x18ef80:
    a0 = *(int16_t*)((v0) + 6);                                 // 0x0018ef80: lh $a0, 6($v0)
    /* move to FPU: $a0, $f0 */                                 // 0x0018ef84: mtc1 $a0, $f0
    /* nop */                                                   // 0x0018ef88: nop 
    /* FPU: cvt.s.w $f0, $f0 */                                 // 0x0018ef8c: cvt.s.w $f0, $f0
    /* FPU: c.eq.s $f0, $f12 */                                 // 0x0018ef90: c.eq.s $f0, $f12
    /* bc1f 0x18efac */                                         // 0x0018ef94: bc1f 0x18efac
    /* nop */                                                   // 0x0018ef98: nop 
    *(uint32_t*)(a1) = v0;                                      // 0x0018ef9c: sw $v0, 0($a1)
    goto label_0x18f024;                                        // 0x0018efa4: b 0x18f024
    *(uint32_t*)(a2) = 0;                                       // 0x0018efa8: sw $zero, 0($a2)
    /* FPU: c.olt.s $f0, $f12 */                                // 0x0018efac: c.olt.s $f0, $f12
    /* bc1f 0x18efe8 */                                         // 0x0018efb0: bc1f 0x18efe8
    /* nop */                                                   // 0x0018efb4: nop 
    v1 = *(int16_t*)((v0) + 0x12);                              // 0x0018efb8: lh $v1, 0x12($v0)
    /* move to FPU: $v1, $f0 */                                 // 0x0018efbc: mtc1 $v1, $f0
    /* nop */                                                   // 0x0018efc0: nop 
    /* FPU: cvt.s.w $f0, $f0 */                                 // 0x0018efc4: cvt.s.w $f0, $f0
    /* FPU: c.olt.s $f12, $f0 */                                // 0x0018efc8: c.olt.s $f12, $f0
    /* bc1f 0x18efe8 */                                         // 0x0018efcc: bc1f 0x18efe8
    /* nop */                                                   // 0x0018efd0: nop 
    *(uint32_t*)(a1) = v0;                                      // 0x0018efd4: sw $v0, 0($a1)
    v0 = v0 + 0xc;                                              // 0x0018efd8: addiu $v0, $v0, 0xc
    *(uint32_t*)(a2) = v0;                                      // 0x0018efdc: sw $v0, 0($a2)
    goto label_0x18f024;                                        // 0x0018efe0: b 0x18f024
    /* move to FPU: $a0, $f0 */                                 // 0x0018efe8: mtc1 $a0, $f0
    /* nop */                                                   // 0x0018efec: nop 
    /* FPU: cvt.s.w $f0, $f0 */                                 // 0x0018eff0: cvt.s.w $f0, $f0
    /* FPU: c.olt.s $f12, $f0 */                                // 0x0018eff4: c.olt.s $f12, $f0
    /* bc1f 0x18f014 */                                         // 0x0018eff8: bc1f 0x18f014
    v1 = a3 + 1;                                                // 0x0018effc: addiu $v1, $a3, 1
    v1 = a3 + -1;                                               // 0x0018f000: addiu $v1, $a3, -1
    v0 = v0 + -0xc;                                             // 0x0018f004: addiu $v0, $v0, -0xc
    goto label_0x18ef80;                                        // 0x0018f00c: b 0x18ef80
    v0 = v0 + 0xc;                                              // 0x0018f014: addiu $v0, $v0, 0xc
    goto label_0x18ef80;                                        // 0x0018f01c: b 0x18ef80
label_0x18f024:
    return;                                                     // 0x0018f024: jr $ra
    /* nop */                                                   // 0x0018f028: nop 
}