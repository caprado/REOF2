void func_0013fd80() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0013fd80: addiu $sp, $sp, -0x10
    t0 = 0x21 << 16;                                            // 0x0013fd84: lui $t0, 0x21
    v1 = t0 + -0xd68;                                           // 0x0013fd8c: addiu $v1, $t0, -0xd68
    v0 = g_0020f29c;  // Global at 0x0020f29c                   // 0x0013fda0: lb $v0, 4($v1)
    if (v0 == 0) goto label_0x13fddc;                           // 0x0013fda4: beqz $v0, 0x13fddc
    v1 = v1 + 4;                                                // 0x0013fdac: addiu $v1, $v1, 4
    a0 = a0 + 1;                                                // 0x0013fdb0: addiu $a0, $a0, 1
    /* nop */                                                   // 0x0013fdb4: nop 
    v0 = (a0 < 0x40) ? 1 : 0;                                   // 0x0013fdb8: slti $v0, $a0, 0x40
    if (v0 == 0) goto label_0x13fddc;                           // 0x0013fdbc: beqz $v0, 0x13fddc
    v1 = v1 + 0x30;                                             // 0x0013fdc0: addiu $v1, $v1, 0x30
    v0 = g_0020f2cc;  // Global at 0x0020f2cc                   // 0x0013fdc4: lb $v0, 0($v1)
    /* nop */                                                   // 0x0013fdc8: nop 
    /* nop */                                                   // 0x0013fdcc: nop 
    /* nop */                                                   // 0x0013fdd0: nop 
    /* bnezl $v0, 0x13fdb8 */                                   // 0x0013fdd4: bnezl $v0, 0x13fdb8
    a0 = a0 + 1;                                                // 0x0013fdd8: addiu $a0, $a0, 1
label_0x13fddc:
    v1 = 0x40;                                                  // 0x0013fddc: addiu $v1, $zero, 0x40
    if (a0 == v1) goto label_0x13fe54;                          // 0x0013fde0: beq $a0, $v1, 0x13fe54
    s0 = a0 << 1;                                               // 0x0013fde8: sll $s0, $a0, 1
    v1 = t0 + -0xd68;                                           // 0x0013fdec: addiu $v1, $t0, -0xd68
    s0 = s0 + a0;                                               // 0x0013fdf0: addu $s0, $s0, $a0
    a0 = a3 + 0xf;                                              // 0x0013fdf4: addiu $a0, $a3, 0xf
    v0 = (a3 < 0) ? 1 : 0;                                      // 0x0013fdf8: slti $v0, $a3, 0
    s0 = s0 << 4;                                               // 0x0013fdfc: sll $s0, $s0, 4
    s0 = s0 + v1;                                               // 0x0013fe00: addu $s0, $s0, $v1
    v1 = 0x21 << 16;                                            // 0x0013fe04: lui $v1, 0x21
    if (v0 != 0) a3 = a0;                                       // 0x0013fe08: movn $a3, $a0, $v0
    v0 = 1;                                                     // 0x0013fe0c: addiu $v0, $zero, 1
    a1 = 0x22 << 16;                                            // 0x0013fe10: lui $a1, 0x22
    a2 = 0x14 << 16;                                            // 0x0013fe14: lui $a2, 0x14
    v1 = v1 + -0xda0;                                           // 0x0013fe18: addiu $v1, $v1, -0xda0
    a1 = a1 + 0x62f8;                                           // 0x0013fe1c: addiu $a1, $a1, 0x62f8
    a3 = a3 >> 4;                                               // 0x0013fe20: sra $a3, $a3, 4
    a2 = a2 + -0x340;                                           // 0x0013fe24: addiu $a2, $a2, -0x340
    *(uint8_t*)((s0) + 4) = v0;                                 // 0x0013fe28: sb $v0, 4($s0)
    *(uint32_t*)(s0) = v1;                                      // 0x0013fe30: sw $v1, 0($s0)
    *(uint8_t*)((s0) + 5) = t1;                                 // 0x0013fe34: sb $t1, 5($s0)
    *(uint32_t*)((s0) + 8) = a1;                                // 0x0013fe38: sw $a1, 8($s0)
    *(uint32_t*)((s0) + 0xc) = t2;                              // 0x0013fe3c: sw $t2, 0xc($s0)
    *(uint32_t*)((s0) + 0x10) = a3;                             // 0x0013fe40: sw $a3, 0x10($s0)
    *(uint32_t*)((s0) + 0x28) = a2;                             // 0x0013fe44: sw $a2, 0x28($s0)
    func_0013feb8();  // 13feb8                                // 0x0013fe48: jal 0x13feb8
    *(uint32_t*)((s0) + 0x2c) = s0;                             // 0x0013fe4c: sw $s0, 0x2c($s0)
label_0x13fe54:
    return;                                                     // 0x0013fe5c: jr $ra
    sp = sp + 0x10;                                             // 0x0013fe60: addiu $sp, $sp, 0x10
}