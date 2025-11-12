void func_001cf880() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001cf880: addiu $sp, $sp, -0x20
    func_001cfd50();  // 0x1cfc90                                // 0x001cf88c: jal 0x1cfc90
    FPU_F2 = *(float*)((s0) + 0x6c);  // Load float             // 0x001cf894: lwc1 $f2, 0x6c($s0)
    FPU_F1 = *(float*)((s0) + 0x70);  // Load float             // 0x001cf898: lwc1 $f1, 0x70($s0)
    /* FPU: sub.s $f0, $f0, $f2 */                              // 0x001cf89c: sub.s $f0, $f0, $f2
    /* FPU: sub.s $f1, $f0, $f1 */                              // 0x001cf8a0: sub.s $f1, $f0, $f1
    *(float*)((s0) + 0x74) = FPU_F1;  // Store float            // 0x001cf8a4: swc1 $f1, 0x74($s0)
    func_001d0140();  // 0x1d00f0                                // 0x001cf8a8: jal 0x1d00f0
    *(float*)((s0) + 0x70) = FPU_F0;  // Store float            // 0x001cf8ac: swc1 $f0, 0x70($s0)
    a1 = 2;                                                     // 0x001cf8b0: addiu $a1, $zero, 2
    if (v0 != a1) goto label_0x1cf9d0;                          // 0x001cf8b4: bne $v0, $a1, 0x1cf9d0
    v1 = 4;                                                     // 0x001cf8b8: addiu $v1, $zero, 4
    a0 = *(int32_t*)(s0);                                       // 0x001cf8bc: lw $a0, 0($s0)
    v1 = 5;                                                     // 0x001cf8c0: addiu $v1, $zero, 5
    if (a0 == v1) goto label_0x1cf9e8;                          // 0x001cf8c4: beq $a0, $v1, 0x1cf9e8
    v1 = 4;                                                     // 0x001cf8c8: addiu $v1, $zero, 4
    if (a0 == v1) goto label_0x1cf9e8;                          // 0x001cf8cc: beq $a0, $v1, 0x1cf9e8
    /* nop */                                                   // 0x001cf8d0: nop 
    v1 = 3;                                                     // 0x001cf8d4: addiu $v1, $zero, 3
    if (a0 == v1) goto label_0x1cf9b8;                          // 0x001cf8d8: beq $a0, $v1, 0x1cf9b8
    /* nop */                                                   // 0x001cf8dc: nop 
    if (a0 == a1) goto label_0x1cf900;                          // 0x001cf8e0: beq $a0, $a1, 0x1cf900
    v1 = 1;                                                     // 0x001cf8e4: addiu $v1, $zero, 1
    if (a0 == v1) goto label_0x1cf8f8;                          // 0x001cf8e8: beq $a0, $v1, 0x1cf8f8
    /* nop */                                                   // 0x001cf8ec: nop 
    goto label_0x1cf9ec;                                        // 0x001cf8f0: b 0x1cf9ec
label_0x1cf8f8:
    goto label_0x1cf9e8;                                        // 0x001cf8f8: b 0x1cf9e8
    *(uint32_t*)(s0) = a1;                                      // 0x001cf8fc: sw $a1, 0($s0)
label_0x1cf900:
    func_001d09d0();  // 0x1d0990                                // 0x001cf900: jal 0x1d0990
    /* nop */                                                   // 0x001cf904: nop 
    v1 = 3;                                                     // 0x001cf908: addiu $v1, $zero, 3
    if (v0 != v1) goto label_0x1cf9a4;                          // 0x001cf90c: bne $v0, $v1, 0x1cf9a4
    v1 = 4;                                                     // 0x001cf910: addiu $v1, $zero, 4
    at = 0x33 << 16;                                            // 0x001cf914: lui $at, 0x33
    v0 = g_0032ce80;  // Global at 0x0032ce80                   // 0x001cf91c: lb $v0, -0x3180($at)
    *(uint32_t*)((s0) + 0x48) = v0;                             // 0x001cf920: sw $v0, 0x48($s0)
    at = 0x33 << 16;                                            // 0x001cf924: lui $at, 0x33
    v0 = g_0032ce81;  // Global at 0x0032ce81                   // 0x001cf928: lb $v0, -0x317f($at)
    goto label_0x1cf940;                                        // 0x001cf92c: b 0x1cf940
    *(uint32_t*)((s0) + 0x40) = v0;                             // 0x001cf930: sw $v0, 0x40($s0)
label_0x1cf934:
    v0 = s0 + v0;                                               // 0x001cf934: addu $v0, $s0, $v0
    *(uint32_t*)((v0) + 0x4c) = v1;                             // 0x001cf938: sw $v1, 0x4c($v0)
    v1 = v1 + 1;                                                // 0x001cf93c: addiu $v1, $v1, 1
label_0x1cf940:
    at = 0x33 << 16;                                            // 0x001cf940: lui $at, 0x33
    v0 = g_0032ce80;  // Global at 0x0032ce80                   // 0x001cf944: lb $v0, -0x3180($at)
    v0 = (v1 < v0) ? 1 : 0;                                     // 0x001cf948: slt $v0, $v1, $v0
    if (v0 != 0) goto label_0x1cf934;                           // 0x001cf94c: bnez $v0, 0x1cf934
    v0 = v1 << 2;                                               // 0x001cf950: sll $v0, $v1, 2
    at = 0x33 << 16;                                            // 0x001cf954: lui $at, 0x33
    v0 = 1;                                                     // 0x001cf958: addiu $v0, $zero, 1
    v1 = g_0032ce81;  // Global at 0x0032ce81                   // 0x001cf95c: lb $v1, -0x317f($at)
    if (v1 != 0) v0 = 0;                                        // 0x001cf960: movn $v0, $zero, $v1
    func_001cfd50();  // 0x1cfc90                                // 0x001cf964: jal 0x1cfc90
    *(uint8_t*)((s0) + 0x44) = v0;                              // 0x001cf968: sb $v0, 0x44($s0)
    *(float*)((s0) + 0x6c) = FPU_F0;  // Store float            // 0x001cf96c: swc1 $f0, 0x6c($s0)
    at = 0x33 << 16;                                            // 0x001cf970: lui $at, 0x33
    *(uint32_t*)((s0) + 0x70) = 0;                              // 0x001cf974: sw $zero, 0x70($s0)
    a1 = g_0032ce81;  // Global at 0x0032ce81                   // 0x001cf978: lb $a1, -0x317f($at)
    at = 0x33 << 16;                                            // 0x001cf97c: lui $at, 0x33
    a2 = g_0032ce80;  // Global at 0x0032ce80                   // 0x001cf980: lb $a2, -0x3180($at)
    at = 0x33 << 16;                                            // 0x001cf984: lui $at, 0x33
    func_001cc370();  // 0x1cc140                                // 0x001cf988: jal 0x1cc140
    a0 = g_0032be54;  // Global at 0x0032be54                   // 0x001cf98c: lw $a0, -0x41ac($at)
    func_001cc130();  // 0x1cc120                                // 0x001cf990: jal 0x1cc120
    /* nop */                                                   // 0x001cf994: nop 
    v1 = 3;                                                     // 0x001cf998: addiu $v1, $zero, 3
    goto label_0x1cf9e8;                                        // 0x001cf99c: b 0x1cf9e8
    *(uint32_t*)(s0) = v1;                                      // 0x001cf9a0: sw $v1, 0($s0)
label_0x1cf9a4:
    if (v0 != v1) goto label_0x1cf9e8;                          // 0x001cf9a4: bne $v0, $v1, 0x1cf9e8
    /* nop */                                                   // 0x001cf9a8: nop 
    v1 = 5;                                                     // 0x001cf9ac: addiu $v1, $zero, 5
    goto label_0x1cf9e8;                                        // 0x001cf9b0: b 0x1cf9e8
    *(uint32_t*)(s0) = v1;                                      // 0x001cf9b4: sw $v1, 0($s0)
label_0x1cf9b8:
    func_001cc710();  // 0x1cc370                                // 0x001cf9b8: jal 0x1cc370
    /* nop */                                                   // 0x001cf9bc: nop 
    if (v0 == 0) goto label_0x1cf9e8;                           // 0x001cf9c0: beqz $v0, 0x1cf9e8
    v1 = 5;                                                     // 0x001cf9c4: addiu $v1, $zero, 5
    goto label_0x1cf9e8;                                        // 0x001cf9c8: b 0x1cf9e8
    *(uint32_t*)(s0) = v1;                                      // 0x001cf9cc: sw $v1, 0($s0)
label_0x1cf9d0:
    if (v0 == v1) goto label_0x1cf9e0;                          // 0x001cf9d0: beq $v0, $v1, 0x1cf9e0
    a0 = 5;                                                     // 0x001cf9d4: addiu $a0, $zero, 5
    goto label_0x1cf9e8;                                        // 0x001cf9d8: b 0x1cf9e8
    /* nop */                                                   // 0x001cf9dc: nop 
label_0x1cf9e0:
    func_001ce640();  // 0x1ce600                                // 0x001cf9e0: jal 0x1ce600
    *(uint32_t*)(s0) = a0;                                      // 0x001cf9e4: sw $a0, 0($s0)
label_0x1cf9e8:
label_0x1cf9ec:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001cf9ec: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001cf9f0: jr $ra
    sp = sp + 0x20;                                             // 0x001cf9f4: addiu $sp, $sp, 0x20
}