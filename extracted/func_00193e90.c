void func_00193e90() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x00193e90: addiu $sp, $sp, -0x40
    a1 = 0x10;                                                  // 0x00193e94: addiu $a1, $zero, 0x10
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x00193ea0: addu.qb $zero, $sp, $s1
    v0 = *(int32_t*)(a0);                                       // 0x00193eac: lw $v0, 0($a0)
    v0 = v0 & 0x7fff;                                           // 0x00193eb0: andi $v0, $v0, 0x7fff
    s2 = v0 + 1;                                                // 0x00193eb4: addiu $s2, $v0, 1
    func_0018dca0();  // 0x18dc30                                // 0x00193eb8: jal 0x18dc30
    a0 = s2 << 4;                                               // 0x00193ebc: sll $a0, $s2, 4
    t1 = *(int32_t*)(s1);                                       // 0x00193ec0: lw $t1, 0($s1)
    v1 = s2 + -1;                                               // 0x00193ec8: addiu $v1, $s2, -1
    v0 = 0x5100 << 16;                                          // 0x00193ecc: lui $v0, 0x5100
    t0 = 0x8000 << 16;                                          // 0x00193ed0: lui $t0, 0x8000
    v0 = v1 | v0;                                               // 0x00193ed4: or $v0, $v1, $v0
    a3 = 0x1300 << 16;                                          // 0x00193ed8: lui $a3, 0x1300
    v1 = t1 | t0;                                               // 0x00193ee8: or $v1, $t1, $t0
    *(uint32_t*)(s1) = v1;                                      // 0x00193eec: sw $v1, 0($s1)
    *(uint32_t*)((s1) + 8) = a3;                                // 0x00193ef0: sw $a3, 8($s1)
    func_00189ad0();  // 0x1899f8                                // 0x00193ef4: jal 0x1899f8
    *(uint32_t*)((s1) + 0xc) = v0;                              // 0x00193ef8: sw $v0, 0xc($s1)
    a3 = 0x29 << 16;                                            // 0x00193f00: lui $a3, 0x29
    v0 = 0x4000 << 16;                                          // 0x00193f08: lui $v0, 0x4000
    a1 = v1 | v0;                                               // 0x00193f14: or $a1, $v1, $v0
    func_0018cff0();  // 0x18ce40                                // 0x00193f18: jal 0x18ce40
    a3 = a3 + -0x350;                                           // 0x00193f1c: addiu $a3, $a3, -0x350
    v0 = 1;                                                     // 0x00193f24: addiu $v0, $zero, 1
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x00193f28: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x00193f2c: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x00193f30: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x00193f34: jr $ra
    sp = sp + 0x40;                                             // 0x00193f38: addiu $sp, $sp, 0x40
}