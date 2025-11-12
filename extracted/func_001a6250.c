void func_001a6250() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_40, local_44, local_48, local_4c;
    
    sp = sp + -0x60;                                            // 0x001a6250: addiu $sp, $sp, -0x60
    v0 = 2;                                                     // 0x001a6254: addiu $v0, $zero, 2
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001a6260: addu.qb $zero, $sp, $s1
    local_4c = 0;                                               // 0x001a6270: sw $zero, 0x4c($sp)
    local_44 = s2;                                              // 0x001a6278: sw $s2, 0x44($sp)
    local_48 = s1;                                              // 0x001a627c: sw $s1, 0x48($sp)
    local_40 = v0;                                              // 0x001a6280: sw $v0, 0x40($sp)
    a1 = *(int32_t*)((a2) + 8);                                 // 0x001a6284: lw $a1, 8($a2)
    func_00180140();  // 0x180038                                // 0x001a6288: jal 0x180038
    a0 = sp + 0x40;                                             // 0x001a628c: addiu $a0, $sp, 0x40
    v1 = v0 & 0xff;                                             // 0x001a6290: andi $v1, $v0, 0xff
    if (v1 < 0) goto label_0x1a62b0;                            // 0x001a6294: bltz $v1, 0x1a62b0
    *(uint8_t*)((s0) + 6) = v0;                                 // 0x001a6298: sb $v0, 6($s0)
    v1 = 1;                                                     // 0x001a629c: addiu $v1, $zero, 1
    *(uint8_t*)(s0) = v1;                                       // 0x001a62a0: sb $v1, 0($s0)
    *(uint8_t*)((s0) + 1) = 0;                                  // 0x001a62a4: sb $zero, 1($s0)
    *(uint8_t*)((s0) + 2) = s2;                                 // 0x001a62a8: sb $s2, 2($s0)
    *(uint8_t*)((s0) + 3) = s1;                                 // 0x001a62ac: sb $s1, 3($s0)
label_0x1a62b0:
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001a62b4: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001a62b8: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001a62bc: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001a62c0: jr $ra
    sp = sp + 0x60;                                             // 0x001a62c4: addiu $sp, $sp, 0x60
}