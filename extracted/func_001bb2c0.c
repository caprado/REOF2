void func_001bb2c0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001bb2c0: addiu $sp, $sp, -0x20
    a2 = 0x18;                                                  // 0x001bb2cc: addiu $a2, $zero, 0x18
    a0 = 0x31 << 16;                                            // 0x001bb2d8: lui $a0, 0x31
    func_00107c70();  // 107c70                                // 0x001bb2dc: jal 0x107c70
    a0 = a0 + -0x8000;                                          // 0x001bb2e0: addiu $a0, $a0, -0x8000
    at = 0x31 << 16;                                            // 0x001bb2e4: lui $at, 0x31
    v1 = 0x280;                                                 // 0x001bb2e8: addiu $v1, $zero, 0x280
    g_00308014 = s0;  // Global at 0x00308014                   // 0x001bb2ec: sw $s0, -0x7fec($at)
    at = 0x31 << 16;                                            // 0x001bb2f0: lui $at, 0x31
    *(uint32_t*)((gp) + -0x61f4) = 0;                           // 0x001bb2f4: sw $zero, -0x61f4($gp)
    g_00308010 = v1;  // Global at 0x00308010                   // 0x001bb2f8: sh $v1, -0x7ff0($at)
    v1 = 0x1e0;                                                 // 0x001bb2fc: addiu $v1, $zero, 0x1e0
    at = 0x31 << 16;                                            // 0x001bb300: lui $at, 0x31
    g_00308012 = v1;  // Global at 0x00308012                   // 0x001bb304: sh $v1, -0x7fee($at)
    at = 0x31 << 16;                                            // 0x001bb308: lui $at, 0x31
    g_0030800c = 0;  // Global at 0x0030800c                    // 0x001bb30c: sh $zero, -0x7ff4($at)
    at = 0x31 << 16;                                            // 0x001bb310: lui $at, 0x31
    g_0030800e = 0;  // Global at 0x0030800e                    // 0x001bb314: sh $zero, -0x7ff2($at)
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001bb31c: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001bb320: jr $ra
    sp = sp + 0x20;                                             // 0x001bb324: addiu $sp, $sp, 0x20
}