void func_00136fd0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00136fd0: addiu $sp, $sp, -0x10
    v0 = 0x20 << 16;                                            // 0x00136fd4: lui $v0, 0x20
    v0 = v0 + 0x21c0;                                           // 0x00136fdc: addiu $v0, $v0, 0x21c0
    a0 = 0x20 << 16;                                            // 0x00136fe0: lui $a0, 0x20
    v1 = g_002021c0;  // Global at 0x002021c0                   // 0x00136fe8: lw $v1, 0($v0)
    a0 = a0 + 0x2188;                                           // 0x00136fec: addiu $a0, $a0, 0x2188
    a2 = 0x38;                                                  // 0x00136ff4: addiu $a2, $zero, 0x38
    return func_00107d30();  // Tail call                        // 0x00136ff8: j 0x107c70
    sp = sp + 0x10;                                             // 0x00136ffc: addiu $sp, $sp, 0x10
    sp = sp + -0x20;                                            // 0x00137000: addiu $sp, $sp, -0x20
    func_001413d8();  // 0x1413c0                                // 0x00137010: jal 0x1413c0
    v0 = 0x20 << 16;                                            // 0x00137018: lui $v0, 0x20
    s0 = v0 + 0x2188;                                           // 0x0013701c: addiu $s0, $v0, 0x2188
    v0 = g_00202188;  // Global at 0x00202188                   // 0x00137020: lb $v0, 0($s0)
    if (v0 != 0) goto label_0x137064;                           // 0x00137024: bnez $v0, 0x137064
    /* nop */                                                   // 0x00137028: nop 
    func_00137000();  // 0x136fd0                                // 0x0013702c: jal 0x136fd0
    /* nop */                                                   // 0x00137030: nop 
    a0 = 1;                                                     // 0x00137034: addiu $a0, $zero, 1
    g_00202188 = a0;  // Global at 0x00202188                   // 0x00137038: sb $a0, 0($s0)
    v1 = 0x20 << 16;                                            // 0x0013703c: lui $v1, 0x20
    v1 = v1 + 0x21e8;                                           // 0x00137040: addiu $v1, $v1, 0x21e8
    a1 = -1;                                                    // 0x00137044: addiu $a1, $zero, -1
    v0 = g_002021e8;  // Global at 0x002021e8                   // 0x00137048: lw $v0, 0($v1)
    g_0020218b = a1;  // Global at 0x0020218b                   // 0x00137050: sb $a1, 3($s0)
    v0 = v0 + 1;                                                // 0x00137054: addiu $v0, $v0, 1
    g_0020218a = 0;  // Global at 0x0020218a                    // 0x00137058: sb $zero, 2($s0)
    g_002021e8 = v0;  // Global at 0x002021e8                   // 0x0013705c: sw $v0, 0($v1)
    g_0020218c = 0;  // Global at 0x0020218c                    // 0x00137060: sw $zero, 4($s0)
label_0x137064:
    func_00141450();  // 0x141438                                // 0x00137064: jal 0x141438
    /* nop */                                                   // 0x00137068: nop 
    return;                                                     // 0x0013707c: jr $ra
    sp = sp + 0x20;                                             // 0x00137080: addiu $sp, $sp, 0x20
}