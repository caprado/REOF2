void func_00129228() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00129228: addiu $sp, $sp, -0x10
    if (s0 != 0) goto label_0x129250;                           // 0x0012923c: bnez $s0, 0x129250
    a0 = 0x22 << 16;                                            // 0x00129244: lui $a0, 0x22
    goto label_0x129278;                                        // 0x00129248: b 0x129278
    a0 = &str_00222770;  // "E9040812:'nsct'is negative.(ADXF_ReadSj32)" // 0x0012924c: addiu $a0, $a0, 0x2770
label_0x129250:
    if (v0 >= 0) goto label_0x129268;                           // 0x00129250: bgez $v0, 0x129268
    /* nop */                                                   // 0x00129254: nop 
    a0 = 0x22 << 16;                                            // 0x00129258: lui $a0, 0x22
    goto label_0x129278;                                        // 0x0012925c: b 0x129278
    a0 = &str_00222798;  // "E9040813:'sj'is NULL.(ADXF_ReadSj32)" // 0x00129260: addiu $a0, $a0, 0x2798
    /* nop */                                                   // 0x00129264: nop 
label_0x129268:
    /* bnezl $v1, 0x129288 */                                   // 0x00129268: bnezl $v1, 0x129288
    a3 = *(int8_t*)((s0) + 1);                                  // 0x0012926c: lb $a3, 1($s0)
    a0 = 0x22 << 16;                                            // 0x00129270: lui $a0, 0x22
    a0 = &str_002227c8;  // "E9040816:'adxf' is NULL.(ADXF_ReadNw32)" // 0x00129274: addiu $a0, $a0, 0x27c8
label_0x129278:
    func_00127d90();  // 127d90                                // 0x00129278: jal 0x127d90
    /* nop */                                                   // 0x0012927c: nop 
    goto label_0x1292a4;                                        // 0x00129280: b 0x1292a4
    v0 = -3;                                                    // 0x00129284: addiu $v0, $zero, -3
    v1 = 2;                                                     // 0x00129288: addiu $v1, $zero, 2
    if (a3 == v1) goto label_0x1292a4;                          // 0x0012928c: beq $a3, $v1, 0x1292a4
    func_00129128();  // 129128                                // 0x00129294: jal 0x129128
    /* nop */                                                   // 0x00129298: nop 
    v1 = 1;                                                     // 0x0012929c: addiu $v1, $zero, 1
    *(uint8_t*)((s0) + 2) = v1;                                 // 0x001292a0: sb $v1, 2($s0)
label_0x1292a4:
    return;                                                     // 0x001292ac: jr $ra
    sp = sp + 0x10;                                             // 0x001292b0: addiu $sp, $sp, 0x10
}