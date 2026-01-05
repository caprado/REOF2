void func_001ce240() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001ce240: addiu $sp, $sp, -0x20
    a1 = 3;                                                     // 0x001ce244: addiu $a1, $zero, 3
    a0 = 0x32 << 16;                                            // 0x001ce254: lui $a0, 0x32
    thunk_func_001ce7e0();  // 1ce7e0                          // 0x001ce258: jal 0x1ce7e0
    a0 = a0 + 0x4f90;                                           // 0x001ce25c: addiu $a0, $a0, 0x4f90
    at = 0x32 << 16;                                            // 0x001ce260: lui $at, 0x32
    a0 = 0x32 << 16;                                            // 0x001ce264: lui $a0, 0x32
    v0 = g_003257d4;  // Global at 0x003257d4                   // 0x001ce268: lbu $v0, 0x57d4($at)
    a0 = a0 + 0x4f90;                                           // 0x001ce26c: addiu $a0, $a0, 0x4f90
    v0 = v0 & 0xf;                                              // 0x001ce270: andi $v0, $v0, 0xf
    v0 = v0 | 0x90;                                             // 0x001ce274: ori $v0, $v0, 0x90
    thunk_func_001ce7e0();  // 1ce7e0                          // 0x001ce278: jal 0x1ce7e0
    a1 = v0 & 0xff;                                             // 0x001ce27c: andi $a1, $v0, 0xff
    a0 = 0x32 << 16;                                            // 0x001ce280: lui $a0, 0x32
    thunk_func_001ce7e0();  // 1ce7e0                          // 0x001ce288: jal 0x1ce7e0
    a0 = a0 + 0x4f90;                                           // 0x001ce28c: addiu $a0, $a0, 0x4f90
    at = 0x32 << 16;                                            // 0x001ce290: lui $at, 0x32
    a1 = 0x32 << 16;                                            // 0x001ce294: lui $a1, 0x32
    a0 = g_003257d4;  // Global at 0x003257d4                   // 0x001ce298: lbu $a0, 0x57d4($at)
    a3 = s0 & 0xff;                                             // 0x001ce29c: andi $a3, $s0, 0xff
    v1 = 1;                                                     // 0x001ce2a0: addiu $v1, $zero, 1
    a1 = a1 + 0x581d;                                           // 0x001ce2a4: addiu $a1, $a1, 0x581d
    v1 = v1 << a3;                                              // 0x001ce2a8: sllv $v1, $v1, $a3
    a2 = v1 & 0xff;                                             // 0x001ce2ac: andi $a2, $v1, 0xff
    v1 = a0 << 4;                                               // 0x001ce2b0: sll $v1, $a0, 4
    v1 = v1 - a0;                                               // 0x001ce2b4: subu $v1, $v1, $a0
    v1 = v1 << 2;                                               // 0x001ce2b8: sll $v1, $v1, 2
    a0 = a1 + v1;                                               // 0x001ce2bc: addu $a0, $a1, $v1
    v1 = g_00324f90;  // Global at 0x00324f90                   // 0x001ce2c0: lbu $v1, 0($a0)
    v1 = v1 | a2;                                               // 0x001ce2c4: or $v1, $v1, $a2
    if (a3 != 0) goto label_0x1ce2f4;                           // 0x001ce2c8: bnez $a3, 0x1ce2f4
    g_00324f90 = v1;  // Global at 0x00324f90                   // 0x001ce2cc: sb $v1, 0($a0)
    at = 0x32 << 16;                                            // 0x001ce2d0: lui $at, 0x32
    a0 = g_003257d4;  // Global at 0x003257d4                   // 0x001ce2d4: lbu $a0, 0x57d4($at)
    v1 = a0 << 4;                                               // 0x001ce2d8: sll $v1, $a0, 4
    v1 = v1 - a0;                                               // 0x001ce2dc: subu $v1, $v1, $a0
    v1 = v1 << 2;                                               // 0x001ce2e0: sll $v1, $v1, 2
    a0 = a1 + v1;                                               // 0x001ce2e4: addu $a0, $a1, $v1
    v1 = g_00324f90;  // Global at 0x00324f90                   // 0x001ce2e8: lbu $v1, 0($a0)
    v1 = v1 | 2;                                                // 0x001ce2ec: ori $v1, $v1, 2
    g_00324f90 = v1;  // Global at 0x00324f90                   // 0x001ce2f0: sb $v1, 0($a0)
label_0x1ce2f4:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001ce2f8: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001ce2fc: jr $ra
    sp = sp + 0x20;                                             // 0x001ce300: addiu $sp, $sp, 0x20
}