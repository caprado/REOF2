void func_0010cd58() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_10, local_14, local_18, local_1c, local_24, local_54, local_8;
    uint32_t local_c, local_e;
    
    sp = sp + -0x480;                                           // 0x0010cd58: addiu $sp, $sp, -0x480
    t2 = 0x400;                                                 // 0x0010cd5c: addiu $t2, $zero, 0x400
    t3 = sp + 0x60;                                             // 0x0010cd6c: addiu $t3, $sp, 0x60
    local_10 = t3;                                              // 0x0010cd78: sw $t3, 0x10($sp)
    v0 = *(uint16_t*)((s0) + 0xc);                              // 0x0010cd7c: lhu $v0, 0xc($s0)
    t1 = *(uint16_t*)((s0) + 0xe);                              // 0x0010cd80: lhu $t1, 0xe($s0)
    t0 = *(int32_t*)((s0) + 0x54);                              // 0x0010cd84: lw $t0, 0x54($s0)
    v0 = v0 & 0xfffd;                                           // 0x0010cd88: andi $v0, $v0, 0xfffd
    v1 = *(int32_t*)((s0) + 0x1c);                              // 0x0010cd8c: lw $v1, 0x1c($s0)
    a3 = *(int32_t*)((s0) + 0x24);                              // 0x0010cd90: lw $a3, 0x24($s0)
    local_54 = t0;                                              // 0x0010cd94: sw $t0, 0x54($sp)
    local_c = v0;                                               // 0x0010cd98: sh $v0, 0xc($sp)
    local_e = t1;                                               // 0x0010cd9c: sh $t1, 0xe($sp)
    local_1c = v1;                                              // 0x0010cda0: sw $v1, 0x1c($sp)
    local_24 = a3;                                              // 0x0010cda4: sw $a3, 0x24($sp)
    local_14 = t2;                                              // 0x0010cda8: sw $t2, 0x14($sp)
    local_0 = t3;                                               // 0x0010cdac: sw $t3, 0($sp)
    local_8 = t2;                                               // 0x0010cdb0: sw $t2, 8($sp)
    func_0010ce88();  // 0x10ce10                                // 0x0010cdb4: jal 0x10ce10
    local_18 = 0;                                               // 0x0010cdb8: sw $zero, 0x18($sp)
    if (s1 < 0) goto label_0x10cdd8;                            // 0x0010cdc0: bltz $s1, 0x10cdd8
    func_001051d0();  // 0x1050b8                                // 0x0010cdc8: jal 0x1050b8
    /* nop */                                                   // 0x0010cdcc: nop 
    v1 = -1;                                                    // 0x0010cdd0: addiu $v1, $zero, -1
    if (v0 != 0) s1 = v1;                                       // 0x0010cdd4: movn $s1, $v1, $v0
label_0x10cdd8:
    v0 = local_c;                                               // 0x0010cdd8: lhu $v0, 0xc($sp)
    v0 = v0 & 0x40;                                             // 0x0010cddc: andi $v0, $v0, 0x40
    if (v0 == 0) goto label_0x10cdf8;                           // 0x0010cde0: beqz $v0, 0x10cdf8
    v0 = *(uint16_t*)((s0) + 0xc);                              // 0x0010cde8: lhu $v0, 0xc($s0)
    v0 = v0 | 0x40;                                             // 0x0010cdec: ori $v0, $v0, 0x40
    *(uint16_t*)((s0) + 0xc) = v0;                              // 0x0010cdf0: sh $v0, 0xc($s0)
label_0x10cdf8:
    return;                                                     // 0x0010ce04: jr $ra
    sp = sp + 0x480;                                            // 0x0010ce08: addiu $sp, $sp, 0x480
}