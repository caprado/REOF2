void func_0018e8c0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = *(int32_t*)((a0) + 4);                                 // 0x0018e8c0: lw $v1, 4($a0)
    v0 = *(int32_t*)((gp) + -0x64e0);                           // 0x0018e8c4: lw $v0, -0x64e0($gp)
    *(uint32_t*)(a1) = 0;                                       // 0x0018e8c8: sw $zero, 0($a1)
    t0 = v1 + v0;                                               // 0x0018e8cc: addu $t0, $v1, $v0
    *(uint32_t*)(a2) = 0;                                       // 0x0018e8d0: sw $zero, 0($a2)
    FPU_F0 = *(float*)((t0) + 4);  // Load float                // 0x0018e8d4: lwc1 $f0, 4($t0)
    /* FPU: c.ole.s $f12, $f0 */                                // 0x0018e8d8: c.ole.s $f12, $f0
    /* bc1t 0x18e8f4 */                                         // 0x0018e8dc: bc1t 0x18e8f4
    /* nop */                                                   // 0x0018e8e0: nop 
    v1 = *(uint16_t*)((a0) + 2);                                // 0x0018e8e4: lhu $v1, 2($a0)
    v0 = 1;                                                     // 0x0018e8e8: addiu $v0, $zero, 1
    if (v1 != v0) goto label_0x18e904;                          // 0x0018e8ec: bne $v1, $v0, 0x18e904
    v0 = v1 << 4;                                               // 0x0018e8f0: sll $v0, $v1, 4
    *(uint32_t*)(a1) = t0;                                      // 0x0018e8f4: sw $t0, 0($a1)
    goto label_0x18ea00;                                        // 0x0018e8fc: b 0x18ea00
    *(uint32_t*)(a2) = 0;                                       // 0x0018e900: sw $zero, 0($a2)
label_0x18e904:
    v0 = v0 + t0;                                               // 0x0018e904: addu $v0, $v0, $t0
    FPU_F0 = *(float*)((v0) + -0xc);  // Load float             // 0x0018e908: lwc1 $f0, -0xc($v0)
    /* FPU: c.olt.s $f12, $f0 */                                // 0x0018e90c: c.olt.s $f12, $f0
    /* bc1t 0x18e940 */                                         // 0x0018e910: bc1t 0x18e940
    /* nop */                                                   // 0x0018e914: nop 
    v0 = v1 + -1;                                               // 0x0018e918: addiu $v0, $v1, -1
    v0 = v0 << 4;                                               // 0x0018e91c: sll $v0, $v0, 4
    v0 = t0 + v0;                                               // 0x0018e920: addu $v0, $t0, $v0
    *(uint32_t*)(a1) = v0;                                      // 0x0018e924: sw $v0, 0($a1)
    *(uint32_t*)(a2) = 0;                                       // 0x0018e928: sw $zero, 0($a2)
    v0 = *(uint16_t*)((a0) + 2);                                // 0x0018e92c: lhu $v0, 2($a0)
    v0 = v0 + -1;                                               // 0x0018e930: addiu $v0, $v0, -1
    goto label_0x18ea00;                                        // 0x0018e938: b 0x18ea00
    if (v0 >= 0) goto label_0x18e958;                           // 0x0018e948: bgez $v0, 0x18e958
    /* nop */                                                   // 0x0018e94c: nop 
    goto label_0x18e970;                                        // 0x0018e950: b 0x18e970
label_0x18e958:
    v0 = (v0 < v1) ? 1 : 0;                                     // 0x0018e958: slt $v0, $v0, $v1
    if (v0 != 0) goto label_0x18e970;                           // 0x0018e95c: bnez $v0, 0x18e970
    /* nop */                                                   // 0x0018e960: nop 
    v0 = v1 + -1;                                               // 0x0018e964: addiu $v0, $v1, -1
label_0x18e970:
    v0 = v0 << 4;                                               // 0x0018e978: sll $v0, $v0, 4
    t0 = t0 + v0;                                               // 0x0018e97c: addu $t0, $t0, $v0
label_0x18e980:
    FPU_F1 = *(float*)((t0) + 4);  // Load float                // 0x0018e980: lwc1 $f1, 4($t0)
    /* FPU: c.eq.s $f1, $f12 */                                 // 0x0018e984: c.eq.s $f1, $f12
    /* bc1f 0x18e9a0 */                                         // 0x0018e988: bc1f 0x18e9a0
    /* nop */                                                   // 0x0018e98c: nop 
    *(uint32_t*)(a1) = t0;                                      // 0x0018e990: sw $t0, 0($a1)
    goto label_0x18ea00;                                        // 0x0018e998: b 0x18ea00
    *(uint32_t*)(a2) = 0;                                       // 0x0018e99c: sw $zero, 0($a2)
    /* FPU: c.olt.s $f1, $f12 */                                // 0x0018e9a0: c.olt.s $f1, $f12
    /* bc1f 0x18e9d0 */                                         // 0x0018e9a4: bc1f 0x18e9d0
    /* nop */                                                   // 0x0018e9a8: nop 
    FPU_F0 = *(float*)((t0) + 0x14);  // Load float             // 0x0018e9ac: lwc1 $f0, 0x14($t0)
    /* FPU: c.olt.s $f12, $f0 */                                // 0x0018e9b0: c.olt.s $f12, $f0
    /* bc1f 0x18e9d0 */                                         // 0x0018e9b4: bc1f 0x18e9d0
    /* nop */                                                   // 0x0018e9b8: nop 
    *(uint32_t*)(a1) = t0;                                      // 0x0018e9bc: sw $t0, 0($a1)
    v0 = t0 + 0x10;                                             // 0x0018e9c0: addiu $v0, $t0, 0x10
    *(uint32_t*)(a2) = v0;                                      // 0x0018e9c4: sw $v0, 0($a2)
    goto label_0x18ea00;                                        // 0x0018e9c8: b 0x18ea00
    /* FPU: c.olt.s $f12, $f1 */                                // 0x0018e9d0: c.olt.s $f12, $f1
    /* bc1f 0x18e9f0 */                                         // 0x0018e9d4: bc1f 0x18e9f0
    v0 = a3 + 1;                                                // 0x0018e9d8: addiu $v0, $a3, 1
    v0 = a3 + -1;                                               // 0x0018e9dc: addiu $v0, $a3, -1
    t0 = t0 + -0x10;                                            // 0x0018e9e0: addiu $t0, $t0, -0x10
    goto label_0x18e980;                                        // 0x0018e9e8: b 0x18e980
    t0 = t0 + 0x10;                                             // 0x0018e9f0: addiu $t0, $t0, 0x10
    goto label_0x18e980;                                        // 0x0018e9f8: b 0x18e980
label_0x18ea00:
    return;                                                     // 0x0018ea00: jr $ra
    /* nop */                                                   // 0x0018ea04: nop 
}