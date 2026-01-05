/** @category: memory/pool @status: complete @author: caprado */
void func_001b2080() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001b2080: addiu $sp, $sp, -0x20
label_0x1b2090:
    a0 = 0x31 << 16;                                            // 0x001b2090: lui $a0, 0x31
    a0 = a0 + -0x7d50;                                          // 0x001b2098: addiu $a0, $a0, -0x7d50
    func_00107c70();  // 107c70                                // 0x001b209c: jal 0x107c70
    a2 = 0x20;                                                  // 0x001b20a0: addiu $a2, $zero, 0x20
    s0 = s0 + 1;                                                // 0x001b20a4: addiu $s0, $s0, 1
    v1 = (s0 < 0x100) ? 1 : 0;                                  // 0x001b20a8: slti $v1, $s0, 0x100
    if (v1 != 0) goto label_0x1b2090;                           // 0x001b20ac: bnez $v1, 0x1b2090
    /* nop */                                                   // 0x001b20b0: nop 
    v1 = 0x31 << 16;                                            // 0x001b20b4: lui $v1, 0x31
    v1 = v1 + -0x7d50;                                          // 0x001b20bc: addiu $v1, $v1, -0x7d50
    *(uint32_t*)((gp) + -0x6370) = v1;                          // 0x001b20c4: sw $v1, -0x6370($gp)
label_0x1b20c8:
    a2 = *(int32_t*)((gp) + -0x6370);                           // 0x001b20c8: lw $a2, -0x6370($gp)
    a3 = a3 + 1;                                                // 0x001b20cc: addiu $a3, $a3, 1
    a0 = t0 + -1;                                               // 0x001b20d0: addiu $a0, $t0, -1
    v1 = (a3 < 0x100) ? 1 : 0;                                  // 0x001b20d4: slti $v1, $a3, 0x100
    a1 = a2 + -2;                                               // 0x001b20d8: addiu $a1, $a2, -2
    *(uint32_t*)((gp) + -0x6370) = a1;                          // 0x001b20dc: sw $a1, -0x6370($gp)
    *(uint16_t*)((a2) + -2) = t0;                               // 0x001b20e0: sh $t0, -2($a2)
    if (v1 != 0) goto label_0x1b20c8;                           // 0x001b20e4: bnez $v1, 0x1b20c8
    t0 = a0 & 0xffff;                                           // 0x001b20e8: andi $t0, $a0, 0xffff
    v1 = 0x100;                                                 // 0x001b20ec: addiu $v1, $zero, 0x100
    *(uint16_t*)((gp) + -0x636c) = 0;                           // 0x001b20f0: sh $zero, -0x636c($gp)
    *(uint16_t*)((gp) + -0x6368) = v1;                          // 0x001b20f4: sh $v1, -0x6368($gp)
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001b20fc: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001b2100: jr $ra
    sp = sp + 0x20;                                             // 0x001b2104: addiu $sp, $sp, 0x20
}