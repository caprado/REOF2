void func_001cf790() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001cf790: addiu $sp, $sp, -0x20
    func_001cfc90();  // 1cfc90                                // 0x001cf79c: jal 0x1cfc90
    func_001cfc90();  // 1cfc90                                // 0x001cf7a4: jal 0x1cfc90
    *(float*)((s0) + 0x6c) = FPU_F0;  // Store float            // 0x001cf7a8: swc1 $f0, 0x6c($s0)
    func_001cfc90();  // 1cfc90                                // 0x001cf7ac: jal 0x1cfc90
    *(float*)((s0) + 0x70) = FPU_F0;  // Store float            // 0x001cf7b0: swc1 $f0, 0x70($s0)
    func_001d0080();  // 1d0080                                // 0x001cf7b4: jal 0x1d0080
    *(float*)((s0) + 0x74) = FPU_F0;  // Store float            // 0x001cf7b8: swc1 $f0, 0x74($s0)
    at = 0x33 << 16;                                            // 0x001cf7bc: lui $at, 0x33
    v0 = g_0032ce80;  // Global at 0x0032ce80                   // 0x001cf7c4: lb $v0, -0x3180($at)
    *(uint32_t*)((s0) + 0x48) = v0;                             // 0x001cf7c8: sw $v0, 0x48($s0)
    at = 0x33 << 16;                                            // 0x001cf7cc: lui $at, 0x33
    v0 = g_0032ce81;  // Global at 0x0032ce81                   // 0x001cf7d0: lb $v0, -0x317f($at)
    goto label_0x1cf7e8;                                        // 0x001cf7d4: b 0x1cf7e8
    *(uint32_t*)((s0) + 0x40) = v0;                             // 0x001cf7d8: sw $v0, 0x40($s0)
label_0x1cf7dc:
    v0 = s0 + v0;                                               // 0x001cf7dc: addu $v0, $s0, $v0
    *(uint32_t*)((v0) + 0x4c) = v1;                             // 0x001cf7e0: sw $v1, 0x4c($v0)
    v1 = v1 + 1;                                                // 0x001cf7e4: addiu $v1, $v1, 1
label_0x1cf7e8:
    at = 0x33 << 16;                                            // 0x001cf7e8: lui $at, 0x33
    v0 = g_0032ce80;  // Global at 0x0032ce80                   // 0x001cf7ec: lb $v0, -0x3180($at)
    v0 = (v1 < v0) ? 1 : 0;                                     // 0x001cf7f0: slt $v0, $v1, $v0
    if (v0 != 0) goto label_0x1cf7dc;                           // 0x001cf7f4: bnez $v0, 0x1cf7dc
    v0 = v1 << 2;                                               // 0x001cf7f8: sll $v0, $v1, 2
    at = 0x33 << 16;                                            // 0x001cf7fc: lui $at, 0x33
    v0 = 1;                                                     // 0x001cf800: addiu $v0, $zero, 1
    v1 = g_0032ce81;  // Global at 0x0032ce81                   // 0x001cf804: lb $v1, -0x317f($at)
    if (v1 != 0) v0 = 0;                                        // 0x001cf808: movn $v0, $zero, $v1
    func_001cfc90();  // 1cfc90                                // 0x001cf80c: jal 0x1cfc90
    *(uint8_t*)((s0) + 0x44) = v0;                              // 0x001cf810: sb $v0, 0x44($s0)
    *(float*)((s0) + 0x6c) = FPU_F0;  // Store float            // 0x001cf814: swc1 $f0, 0x6c($s0)
    at = 0x33 << 16;                                            // 0x001cf818: lui $at, 0x33
    *(uint32_t*)((s0) + 0x70) = 0;                              // 0x001cf81c: sw $zero, 0x70($s0)
    a1 = g_0032ce81;  // Global at 0x0032ce81                   // 0x001cf820: lb $a1, -0x317f($at)
    at = 0x33 << 16;                                            // 0x001cf824: lui $at, 0x33
    a2 = g_0032ce80;  // Global at 0x0032ce80                   // 0x001cf828: lb $a2, -0x3180($at)
    at = 0x33 << 16;                                            // 0x001cf82c: lui $at, 0x33
    func_001cc140();  // 1cc140                                // 0x001cf830: jal 0x1cc140
    a0 = g_0032be54;  // Global at 0x0032be54                   // 0x001cf834: lw $a0, -0x41ac($at)
    func_001cc120();  // 1cc120                                // 0x001cf838: jal 0x1cc120
    /* nop */                                                   // 0x001cf83c: nop 
    v1 = 3;                                                     // 0x001cf840: addiu $v1, $zero, 3
    *(uint32_t*)(s0) = v1;                                      // 0x001cf844: sw $v1, 0($s0)
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001cf84c: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001cf850: jr $ra
    sp = sp + 0x20;                                             // 0x001cf854: addiu $sp, $sp, 0x20
}