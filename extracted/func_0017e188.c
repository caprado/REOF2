void func_0017e188() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x60;                                            // 0x0017e188: addiu $sp, $sp, -0x60
    v1 = 0x23 << 16;                                            // 0x0017e18c: lui $v1, 0x23
    s1 = sp + 0x10;                                             // 0x0017e19c: addiu $s1, $sp, 0x10
    s2 = sp + 0x20;                                             // 0x0017e1a4: addiu $s2, $sp, 0x20
    a1 = 0x23 << 16;                                            // 0x0017e1b4: lui $a1, 0x23
    t2 = v1 + -0x6248;                                          // 0x0017e1b8: addiu $t2, $v1, -0x6248
    a2 = 0x23 << 16;                                            // 0x0017e1cc: lui $a2, 0x23
    t1 = a1 + -0x6230;                                          // 0x0017e1d0: addiu $t1, $a1, -0x6230
    a0 = s0 + 2;                                                // 0x0017e1e4: addiu $a0, $s0, 2
    v0 = *(int32_t*)(s3);                                       // 0x0017e1e8: lw $v0, 0($s3)
    a3 = a2 + -0x6218;                                          // 0x0017e1ec: addiu $a3, $a2, -0x6218
    a2 = 1;                                                     // 0x0017e200: addiu $a2, $zero, 1
    v0 = v0 << 2;                                               // 0x0017e204: sll $v0, $v0, 2
    v1 = sp + v0;                                               // 0x0017e208: addu $v1, $sp, $v0
    func_0010b460();  // 0x10b2a0                                // 0x0017e20c: jal 0x10b2a0
    a1 = g_00230000;  // Global at 0x00230000                   // 0x0017e210: lw $a1, 0($v1)
    v1 = *(int32_t*)((s3) + 4);                                 // 0x0017e214: lw $v1, 4($s3)
    a0 = s0 + 3;                                                // 0x0017e218: addiu $a0, $s0, 3
    a2 = 1;                                                     // 0x0017e21c: addiu $a2, $zero, 1
    v1 = v1 << 2;                                               // 0x0017e220: sll $v1, $v1, 2
    s1 = s1 + v1;                                               // 0x0017e224: addu $s1, $s1, $v1
    func_0010b460();  // 0x10b2a0                                // 0x0017e228: jal 0x10b2a0
    a1 = *(int32_t*)(s1);                                       // 0x0017e22c: lw $a1, 0($s1)
    v1 = *(int32_t*)((s3) + 8);                                 // 0x0017e230: lw $v1, 8($s3)
    a0 = s0 + 4;                                                // 0x0017e234: addiu $a0, $s0, 4
    a2 = 1;                                                     // 0x0017e238: addiu $a2, $zero, 1
    v1 = v1 << 2;                                               // 0x0017e23c: sll $v1, $v1, 2
    s2 = s2 + v1;                                               // 0x0017e240: addu $s2, $s2, $v1
    func_0010b460();  // 0x10b2a0                                // 0x0017e244: jal 0x10b2a0
    a1 = *(int32_t*)(s2);                                       // 0x0017e248: lw $a1, 0($s2)
    return;                                                     // 0x0017e260: jr $ra
    sp = sp + 0x60;                                             // 0x0017e264: addiu $sp, $sp, 0x60
}