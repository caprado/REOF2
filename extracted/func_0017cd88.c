void func_0017cd88() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0017cd88: addiu $sp, $sp, -0x20
    a2 = 0x90;                                                  // 0x0017cda0: addiu $a2, $zero, 0x90
    func_00107d30();  // 0x107c70                                // 0x0017cdac: jal 0x107c70
    v1 = s1 + 0x1f;                                             // 0x0017cdb4: addiu $v1, $s1, 0x1f
    v0 = -0x20;                                                 // 0x0017cdb8: addiu $v0, $zero, -0x20
    v1 = v1 & v0;                                               // 0x0017cdbc: and $v1, $v1, $v0
    a3 = 1;                                                     // 0x0017cdc0: addiu $a3, $zero, 1
    a1 = v1 + 0xc00;                                            // 0x0017cdc4: addiu $a1, $v1, 0xc00
    v0 = v1 + 0x400;                                            // 0x0017cdc8: addiu $v0, $v1, 0x400
    a0 = v1 + 0x800;                                            // 0x0017cdcc: addiu $a0, $v1, 0x800
    a2 = -1;                                                    // 0x0017cdd0: addiu $a2, $zero, -1
    *(uint32_t*)((s0) + 0x54) = s1;                             // 0x0017cdd4: sw $s1, 0x54($s0)
    *(uint32_t*)((s0) + 0x58) = s2;                             // 0x0017cdd8: sw $s2, 0x58($s0)
    *(uint32_t*)(s0) = a3;                                      // 0x0017cddc: sw $a3, 0($s0)
    *(uint32_t*)((s0) + 0x40) = v0;                             // 0x0017cde0: sw $v0, 0x40($s0)
    *(uint32_t*)((s0) + 0x44) = a0;                             // 0x0017cde4: sw $a0, 0x44($s0)
    *(uint32_t*)((s0) + 0x48) = a1;                             // 0x0017cde8: sw $a1, 0x48($s0)
    *(uint32_t*)((s0) + 0x64) = a2;                             // 0x0017cdec: sw $a2, 0x64($s0)
    *(uint32_t*)((s0) + 4) = 0;                                 // 0x0017cdf0: sw $zero, 4($s0)
    *(uint32_t*)((s0) + 8) = 0;                                 // 0x0017cdf4: sw $zero, 8($s0)
    *(uint32_t*)((s0) + 0xc) = 0;                               // 0x0017cdf8: sw $zero, 0xc($s0)
    *(uint32_t*)((s0) + 0x28) = a3;                             // 0x0017cdfc: sw $a3, 0x28($s0)
    *(uint32_t*)((s0) + 0x2c) = 0;                              // 0x0017ce00: sw $zero, 0x2c($s0)
    *(uint32_t*)((s0) + 0x38) = 0;                              // 0x0017ce04: sw $zero, 0x38($s0)
    *(uint32_t*)((s0) + 0x3c) = v1;                             // 0x0017ce08: sw $v1, 0x3c($s0)
    return;                                                     // 0x0017ce1c: jr $ra
    sp = sp + 0x20;                                             // 0x0017ce20: addiu $sp, $sp, 0x20
}