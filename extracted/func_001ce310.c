void func_001ce310() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001ce310: addiu $sp, $sp, -0x20
    a1 = 7;                                                     // 0x001ce314: addiu $a1, $zero, 7
    a0 = 0x32 << 16;                                            // 0x001ce324: lui $a0, 0x32
    thunk_func_001ce7e0();  // 1ce7e0                          // 0x001ce328: jal 0x1ce7e0
    a0 = a0 + 0x4f90;                                           // 0x001ce32c: addiu $a0, $a0, 0x4f90
    at = 0x32 << 16;                                            // 0x001ce330: lui $at, 0x32
    a0 = 0x32 << 16;                                            // 0x001ce334: lui $a0, 0x32
    v0 = g_003257d4;  // Global at 0x003257d4                   // 0x001ce338: lbu $v0, 0x57d4($at)
    a0 = a0 + 0x4f90;                                           // 0x001ce33c: addiu $a0, $a0, 0x4f90
    v0 = v0 & 0xf;                                              // 0x001ce340: andi $v0, $v0, 0xf
    v0 = v0 | 0x20;                                             // 0x001ce344: ori $v0, $v0, 0x20
    thunk_func_001ce7e0();  // 1ce7e0                          // 0x001ce348: jal 0x1ce7e0
    a1 = v0 & 0xff;                                             // 0x001ce34c: andi $a1, $v0, 0xff
    a0 = 0x32 << 16;                                            // 0x001ce350: lui $a0, 0x32
    thunk_func_001ce7e0();  // 1ce7e0                          // 0x001ce358: jal 0x1ce7e0
    a0 = a0 + 0x4f90;                                           // 0x001ce35c: addiu $a0, $a0, 0x4f90
    at = 0x32 << 16;                                            // 0x001ce360: lui $at, 0x32
    a0 = 0x32 << 16;                                            // 0x001ce364: lui $a0, 0x32
    FPU_F12 = *(float*)((at) + 0x57ec);  // Load float          // 0x001ce368: lwc1 $f12, 0x57ec($at)
    thunk_func_001ce7f0();  // 1ce7f0                          // 0x001ce36c: jal 0x1ce7f0
    a0 = a0 + 0x4f90;                                           // 0x001ce370: addiu $a0, $a0, 0x4f90
    at = 0x32 << 16;                                            // 0x001ce374: lui $at, 0x32
    v1 = 0x32 << 16;                                            // 0x001ce378: lui $v1, 0x32
    a1 = g_003257d4;  // Global at 0x003257d4                   // 0x001ce37c: lbu $a1, 0x57d4($at)
    v1 = v1 + 0x582c;                                           // 0x001ce380: addiu $v1, $v1, 0x582c
    a0 = a1 << 4;                                               // 0x001ce384: sll $a0, $a1, 4
    a0 = a0 - a1;                                               // 0x001ce388: subu $a0, $a0, $a1
    a0 = a0 << 2;                                               // 0x001ce38c: sll $a0, $a0, 2
    v1 = v1 + a0;                                               // 0x001ce390: addu $v1, $v1, $a0
    g_0032582c = s0;  // Global at 0x0032582c                   // 0x001ce394: sb $s0, 0($v1)
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001ce39c: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001ce3a0: jr $ra
    sp = sp + 0x20;                                             // 0x001ce3a4: addiu $sp, $sp, 0x20
}